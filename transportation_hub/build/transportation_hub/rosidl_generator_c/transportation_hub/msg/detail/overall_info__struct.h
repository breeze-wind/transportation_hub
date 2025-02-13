// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from transportation_hub:msg/OverallInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__STRUCT_H_
#define TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'road_info'
#include "transportation_hub/msg/detail/road_info__struct.h"

/// Struct defined in msg/OverallInfo in the package transportation_hub.
typedef struct transportation_hub__msg__OverallInfo
{
  int32_t number_of_cities;
  int32_t number_of_roads;
  transportation_hub__msg__RoadInfo__Sequence road_info;
  int32_t src_city;
  int32_t des_city;
} transportation_hub__msg__OverallInfo;

// Struct for a sequence of transportation_hub__msg__OverallInfo.
typedef struct transportation_hub__msg__OverallInfo__Sequence
{
  transportation_hub__msg__OverallInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} transportation_hub__msg__OverallInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__STRUCT_H_
