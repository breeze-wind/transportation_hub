// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from transportation_hub:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "transportation_hub/msg/detail/road_info__struct.hpp"
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

void RoadInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) transportation_hub::msg::RoadInfo(_init);
}

void RoadInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<transportation_hub::msg::RoadInfo *>(message_memory);
  typed_message->~RoadInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RoadInfo_message_member_array[3] = {
  {
    "source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::RoadInfo, source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "destination",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::RoadInfo, destination),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub::msg::RoadInfo, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RoadInfo_message_members = {
  "transportation_hub::msg",  // message namespace
  "RoadInfo",  // message name
  3,  // number of fields
  sizeof(transportation_hub::msg::RoadInfo),
  RoadInfo_message_member_array,  // message members
  RoadInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  RoadInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RoadInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RoadInfo_message_members,
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
get_message_type_support_handle<transportation_hub::msg::RoadInfo>()
{
  return &::transportation_hub::msg::rosidl_typesupport_introspection_cpp::RoadInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, transportation_hub, msg, RoadInfo)() {
  return &::transportation_hub::msg::rosidl_typesupport_introspection_cpp::RoadInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
