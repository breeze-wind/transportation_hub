// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROAD_INFO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ROAD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoadInfo in the package interfaces.
typedef struct interfaces__msg__RoadInfo
{
  int32_t source;
  int32_t destination;
  int32_t length;
} interfaces__msg__RoadInfo;

// Struct for a sequence of interfaces__msg__RoadInfo.
typedef struct interfaces__msg__RoadInfo__Sequence
{
  interfaces__msg__RoadInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__RoadInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ROAD_INFO__STRUCT_H_
