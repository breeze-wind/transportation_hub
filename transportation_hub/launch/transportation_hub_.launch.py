from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 启动 transportation_hub 节点
        Node(
            package='transportation_hub',
            executable='transportation_hub_node',
            output='screen',
        ),
    ])
