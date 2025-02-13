cmake_minimum_required(VERSION 3.5)
project(interfaces)

# 设置 C++ 标准
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 生成消息和服务接口
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/RoadInfo.msg"
  "msg/OverallInfo.msg"
  "srv/Judge.srv"
)

# 安装消息和服务文件
install(
  DIRECTORY msg srv
  DESTINATION share/${PROJECT_NAME}
)

# 声明 ament 包
ament_package()
