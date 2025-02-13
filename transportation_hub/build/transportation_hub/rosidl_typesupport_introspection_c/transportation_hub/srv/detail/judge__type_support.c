// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from transportation_hub:srv/Judge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "transportation_hub/srv/detail/judge__rosidl_typesupport_introspection_c.h"
#include "transportation_hub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "transportation_hub/srv/detail/judge__functions.h"
#include "transportation_hub/srv/detail/judge__struct.h"


// Include directives for member types
// Member `path`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  transportation_hub__srv__Judge_Request__init(message_memory);
}

void transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_fini_function(void * message_memory)
{
  transportation_hub__srv__Judge_Request__fini(message_memory);
}

size_t transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__size_function__Judge_Request__path(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__get_const_function__Judge_Request__path(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__get_function__Judge_Request__path(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__fetch_function__Judge_Request__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__get_const_function__Judge_Request__path(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__assign_function__Judge_Request__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__get_function__Judge_Request__path(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__resize_function__Judge_Request__path(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_member_array[1] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub__srv__Judge_Request, path),  // bytes offset in struct
    NULL,  // default value
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__size_function__Judge_Request__path,  // size() function pointer
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__get_const_function__Judge_Request__path,  // get_const(index) function pointer
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__get_function__Judge_Request__path,  // get(index) function pointer
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__fetch_function__Judge_Request__path,  // fetch(index, &value) function pointer
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__assign_function__Judge_Request__path,  // assign(index, value) function pointer
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__resize_function__Judge_Request__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_members = {
  "transportation_hub__srv",  // message namespace
  "Judge_Request",  // message name
  1,  // number of fields
  sizeof(transportation_hub__srv__Judge_Request),
  transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_member_array,  // message members
  transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_type_support_handle = {
  0,
  &transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_transportation_hub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, srv, Judge_Request)() {
  if (!transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_type_support_handle.typesupport_identifier) {
    transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &transportation_hub__srv__Judge_Request__rosidl_typesupport_introspection_c__Judge_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "transportation_hub/srv/detail/judge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "transportation_hub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "transportation_hub/srv/detail/judge__functions.h"
// already included above
// #include "transportation_hub/srv/detail/judge__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  transportation_hub__srv__Judge_Response__init(message_memory);
}

void transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_fini_function(void * message_memory)
{
  transportation_hub__srv__Judge_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(transportation_hub__srv__Judge_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_members = {
  "transportation_hub__srv",  // message namespace
  "Judge_Response",  // message name
  1,  // number of fields
  sizeof(transportation_hub__srv__Judge_Response),
  transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_member_array,  // message members
  transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_type_support_handle = {
  0,
  &transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_transportation_hub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, srv, Judge_Response)() {
  if (!transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_type_support_handle.typesupport_identifier) {
    transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &transportation_hub__srv__Judge_Response__rosidl_typesupport_introspection_c__Judge_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "transportation_hub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "transportation_hub/srv/detail/judge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_service_members = {
  "transportation_hub__srv",  // service namespace
  "Judge",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_Request_message_type_support_handle,
  NULL  // response message
  // transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_Response_message_type_support_handle
};

static rosidl_service_type_support_t transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_service_type_support_handle = {
  0,
  &transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, srv, Judge_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, srv, Judge_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_transportation_hub
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, srv, Judge)() {
  if (!transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_service_type_support_handle.typesupport_identifier) {
    transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, srv, Judge_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, transportation_hub, srv, Judge_Response)()->data;
  }

  return &transportation_hub__srv__detail__judge__rosidl_typesupport_introspection_c__Judge_service_type_support_handle;
}
