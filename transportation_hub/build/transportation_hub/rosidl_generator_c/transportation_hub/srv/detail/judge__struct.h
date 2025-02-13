// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from transportation_hub:srv/Judge.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__STRUCT_H_
#define TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Judge in the package transportation_hub.
typedef struct transportation_hub__srv__Judge_Request
{
  rosidl_runtime_c__int32__Sequence path;
} transportation_hub__srv__Judge_Request;

// Struct for a sequence of transportation_hub__srv__Judge_Request.
typedef struct transportation_hub__srv__Judge_Request__Sequence
{
  transportation_hub__srv__Judge_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} transportation_hub__srv__Judge_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Judge in the package transportation_hub.
typedef struct transportation_hub__srv__Judge_Response
{
  uint8_t structure_needs_at_least_one_member;
} transportation_hub__srv__Judge_Response;

// Struct for a sequence of transportation_hub__srv__Judge_Response.
typedef struct transportation_hub__srv__Judge_Response__Sequence
{
  transportation_hub__srv__Judge_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} transportation_hub__srv__Judge_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__STRUCT_H_
