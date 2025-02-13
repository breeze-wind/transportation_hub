// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from transportation_hub:msg/OverallInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "transportation_hub/msg/detail/overall_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace transportation_hub
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OverallInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) transportation_hub::msg::OverallInfo(_init);
}

void OverallInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<transportation_hub::msg::OverallInfo *>(message_memory);
  typed_message->~OverallInfo();
}

size_t size_function__OverallInfo__road_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<transportation_hub::msg::RoadInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OverallInfo__road_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<transportation_hub::msg::RoadInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__OverallInfo__road_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<transportation_hub::msg::RoadInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__OverallInfo__road_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const transportation_hub::msg::RoadInfo *>(
    get_const_function__OverallInfo__road_info(untyped_member, index));
  auto & value = *reinterpret_cast<transportation_hub::msg::RoadInfo *>(untyped_value);
  value = item;
}

void assign_function__OverallInfo__road_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<transportation_hub::msg::RoadInfo *>(
    get_function__OverallInfo__road_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const transportation_hub::msg::RoadInfo *>(untyped_value);
  item = value;
}

void resize_function__OverallInfo__road_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<transportation_hub::msg::RoadInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OverallInfo_message_member_array[5] = {
  {
    "number_of_cities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::OverallInfo, number_of_cities),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number_of_roads",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::OverallInfo, number_of_roads),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<transportation_hub::msg::RoadInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::OverallInfo, road_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__OverallInfo__road_info,  // size() function pointer
    get_const_function__OverallInfo__road_info,  // get_const(index) function pointer
    get_function__OverallInfo__road_info,  // get(index) function pointer
    fetch_function__OverallInfo__road_info,  // fetch(index, &value) function pointer
    assign_function__OverallInfo__road_info,  // assign(index, value) function pointer
    resize_function__OverallInfo__road_info  // resize(index) function pointer
  },
  {
    "src_city",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::OverallInfo, src_city),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "des_city",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::OverallInfo, des_city),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OverallInfo_message_members = {
  "transportation_hub::msg",  // message namespace
  "OverallInfo",  // message name
  5,  // number of fields
  sizeof(transportation_hub::msg::OverallInfo),
  OverallInfo_message_member_array,  // message members
  OverallInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  OverallInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OverallInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OverallInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace transportation_hub


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<transportation_hub::msg::OverallInfo>()
{
  return &::transportation_hub::msg::rosidl_typesupport_introspection_cpp::OverallInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, transportation_hub, msg, OverallInfo)() {
  return &::transportation_hub::msg::rosidl_typesupport_introspection_cpp::OverallInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
