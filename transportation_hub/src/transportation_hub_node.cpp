//
// Created by sfx233 on 25-2-12.
//
#include "rclcpp/rclcpp.hpp"

#include "/home/sfx233/rm1/build/interfaces/rosidl_generator_cpp/interfaces/msg/overall_info.hpp"
#include "/home/sfx233/rm1/build/interfaces/rosidl_generator_cpp/interfaces/msg/road_info.hpp"
#include "/home/sfx233/rm1/build/interfaces/rosidl_generator_cpp/interfaces/srv/judge.hpp"

#include <vector>
#include <queue>
#include <climits>

using namespace std::chrono_literals;

class TransportationHubNode : public rclcpp::Node {
public:
    TransportationHubNode() : Node("transportation_hub_node") {
        subscription_ = this->create_subscription<interfaces::msg::OverallInfo>(
            "question", 10, std::bind(&TransportationHubNode::topic_callback, this, std::placeholders::_1));
        client_ = this->create_client<interfaces::srv::Judge>("judger_server");
    }

private:
    void topic_callback(const interfaces::msg::OverallInfo::SharedPtr msg) {
        int num_cities = msg->number_of_cities;
        int src = msg->src_city;
        int des = msg->des_city;

        // 构建邻接表（有向图）
        std::vector<std::vector<std::pair<int, int>>> adj(num_cities);
        for (const auto &road : msg->road_info) {
            int u = road.source;
            int v = road.destination;
            int len = road.length;
            adj[u].emplace_back(v, len);
        }

        // Dijkstra算法
        std::vector<int> dist(num_cities, INT_MAX);
        std::vector<int> prev(num_cities, -1);
        dist[src] = 0;

        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;
        pq.emplace(0, src);

        while (!pq.empty()) {
            auto [current_dist, u] = pq.top();
            pq.pop();

            if (current_dist > dist[u]) continue;

            for (const auto &[v, len] : adj[u]) {
                if (dist[v] > dist[u] + len) {
                    dist[v] = dist[u] + len;
                    prev[v] = u;
                    pq.emplace(dist[v], v);
                }
            }
        }

        // 处理路径不可达
        if (dist[des] == INT_MAX) {
            RCLCPP_ERROR(this->get_logger(), "No path from %d to %d", src, des);
            return;
        }

        // 回溯路径
        std::vector<int> path;
        for (int at = des; at != -1; at = prev[at]) {
            path.push_back(at);
        }
        std::reverse(path.begin(), path.end());

        // 发送服务请求
        auto request = std::make_shared<interfaces::srv::Judge::Request>();
        request->path = path;

        auto result_future = client_->async_send_request(request);
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future) !=
            rclcpp::FutureReturnCode::SUCCESS) {
            RCLCPP_ERROR(this->get_logger(), "Service call failed");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Path sent successfully");
    }

    rclcpp::Subscription<interfaces::msg::OverallInfo>::SharedPtr subscription_;
    rclcpp::Client<interfaces::srv::Judge>::SharedPtr client_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TransportationHubNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
