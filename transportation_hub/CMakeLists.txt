cmake_minimum_required(VERSION 3.5)
project(transportation_hub)

# 设置 C++ 标准
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(interfaces REQUIRED)  # 新增依赖

# 添加可执行文件
add_executable(transportation_hub_node src/transportation_hub_node.cpp)
ament_target_dependencies(transportation_hub_node
  rclcpp
  interfaces  # 链接 interfaces 包
)

# 安装可执行文件和 launch 文件
install(TARGETS
  transportation_hub_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

# 声明 ament 包
ament_package()
