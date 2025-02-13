// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from transportation_hub:msg/OverallInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "transportation_hub/msg/detail/overall_info__rosidl_typesupport_introspection_c.h"
#include "transportation_hub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "transportation_hub/msg/detail/overall_info__functions.h"
#include "transportation_hub/msg/detail/overall_info__struct.h"


// Include directives for member types
// Member `road_info`
#include "transportation_hub/msg/road_info.h"
// Member `road_info`
#include "transportation_hub/msg/detail/road_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  transportation_hub__msg__OverallInfo__init(message_memory);
}

void transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_fini_function(void * message_memory)
{
  transportation_hub__msg__OverallInfo__fini(message_memory);
}

size_t transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__size_function__OverallInfo__road_info(
  const void * untyped_member)
{
  const transportation_hub__msg__RoadInfo__Sequence * member =
    (const transportation_hub__msg__RoadInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__get_const_function__OverallInfo__road_info(
  const void * untyped_member, size_t index)
{
  const transportation_hub__msg__RoadInfo__Sequence * member =
    (const transportation_hub__msg__RoadInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__get_function__OverallInfo__road_info(
  void * untyped_member, size_t index)
{
  transportation_hub__msg__RoadInfo__Sequence * member =
    (transportation_hub__msg__RoadInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__fetch_function__OverallInfo__road_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const transportation_hub__msg__RoadInfo * item =
    ((const transportation_hub__msg__RoadInfo *)
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__get_const_function__OverallInfo__road_info(untyped_member, index));
  transportation_hub__msg__RoadInfo * value =
    (transportation_hub__msg__RoadInfo *)(untyped_value);
  *value = *item;
}

void transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__assign_function__OverallInfo__road_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  transportation_hub__msg__RoadInfo * item =
    ((transportation_hub__msg__RoadInfo *)
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__get_function__OverallInfo__road_info(untyped_member, index));
  const transportation_hub__msg__RoadInfo * value =
    (const transportation_hub__msg__RoadInfo *)(untyped_value);
  *item = *value;
}

bool transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__resize_function__OverallInfo__road_info(
  void * untyped_member, size_t size)
{
  transportation_hub__msg__RoadInfo__Sequence * member =
    (transportation_hub__msg__RoadInfo__Sequence *)(untyped_member);
  transportation_hub__msg__RoadInfo__Sequence__fini(member);
  return transportation_hub__msg__RoadInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_member_array[5] = {
  {
    "number_of_cities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub__msg__OverallInfo, number_of_cities),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_roads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub__msg__OverallInfo, number_of_roads),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub__msg__OverallInfo, road_info),  // bytes offset in struct
    NULL,  // default value
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__size_function__OverallInfo__road_info,  // size() function pointer
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__get_const_function__OverallInfo__road_info,  // get_const(index) function pointer
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__get_function__OverallInfo__road_info,  // get(index) function pointer
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__fetch_function__OverallInfo__road_info,  // fetch(index, &value) function pointer
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__assign_function__OverallInfo__road_info,  // assign(index, value) function pointer
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__resize_function__OverallInfo__road_info  // resize(index) function pointer
  },
  {
    "src_city",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub__msg__OverallInfo, src_city),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "des_city",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub__msg__OverallInfo, des_city),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_members = {
  "transportation_hub__msg",  // message namespace
  "OverallInfo",  // message name
  5,  // number of fields
  sizeof(transportation_hub__msg__OverallInfo),
  transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_member_array,  // message members
  transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_type_support_handle = {
  0,
  &transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_transportation_hub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, msg, OverallInfo)() {
  transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, msg, RoadInfo)();
  if (!transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_type_support_handle.typesupport_identifier) {
    transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &transportation_hub__msg__OverallInfo__rosidl_typesupport_introspection_c__OverallInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
