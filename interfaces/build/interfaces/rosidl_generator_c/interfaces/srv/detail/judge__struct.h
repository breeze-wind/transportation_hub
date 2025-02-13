// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/Judge.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__JUDGE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__JUDGE__STRUCT_H_

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

/// Struct defined in srv/Judge in the package interfaces.
typedef struct interfaces__srv__Judge_Request
{
  rosidl_runtime_c__int32__Sequence path;
} interfaces__srv__Judge_Request;

// Struct for a sequence of interfaces__srv__Judge_Request.
typedef struct interfaces__srv__Judge_Request__Sequence
{
  interfaces__srv__Judge_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Judge_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Judge in the package interfaces.
typedef struct interfaces__srv__Judge_Response
{
  uint8_t structure_needs_at_least_one_member;
} interfaces__srv__Judge_Response;

// Struct for a sequence of interfaces__srv__Judge_Response.
typedef struct interfaces__srv__Judge_Response__Sequence
{
  interfaces__srv__Judge_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Judge_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__JUDGE__STRUCT_H_
