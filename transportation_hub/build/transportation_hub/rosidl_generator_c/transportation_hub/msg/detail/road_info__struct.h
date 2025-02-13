// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from transportation_hub:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__STRUCT_H_
#define TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoadInfo in the package transportation_hub.
typedef struct transportation_hub__msg__RoadInfo
{
  int32_t source;
  int32_t destination;
  int32_t length;
} transportation_hub__msg__RoadInfo;

// Struct for a sequence of transportation_hub__msg__RoadInfo.
typedef struct transportation_hub__msg__RoadInfo__Sequence
{
  transportation_hub__msg__RoadInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} transportation_hub__msg__RoadInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__STRUCT_H_
