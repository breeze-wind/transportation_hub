// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from transportation_hub:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "transportation_hub/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "transportation_hub/msg/detail/road_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace transportation_hub
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_transportation_hub
cdr_serialize(
  const transportation_hub::msg::RoadInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_transportation_hub
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  transportation_hub::msg::RoadInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_transportation_hub
get_serialized_size(
  const transportation_hub::msg::RoadInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_transportation_hub
max_serialized_size_RoadInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace transportation_hub

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_transportation_hub
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, transportation_hub, msg, RoadInfo)();

#ifdef __cplusplus
}
#endif

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
