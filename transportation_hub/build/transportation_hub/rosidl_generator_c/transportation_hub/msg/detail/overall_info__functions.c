// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from transportation_hub:msg/OverallInfo.idl
// generated code does not contain a copyright notice
#include "transportation_hub/msg/detail/overall_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `road_info`
#include "transportation_hub/msg/detail/road_info__functions.h"

bool
transportation_hub__msg__OverallInfo__init(transportation_hub__msg__OverallInfo * msg)
{
  if (!msg) {
    return false;
  }
  // number_of_cities
  // number_of_roads
  // road_info
  if (!transportation_hub__msg__RoadInfo__Sequence__init(&msg->road_info, 0)) {
    transportation_hub__msg__OverallInfo__fini(msg);
    return false;
  }
  // src_city
  // des_city
  return true;
}

void
transportation_hub__msg__OverallInfo__fini(transportation_hub__msg__OverallInfo * msg)
{
  if (!msg) {
    return;
  }
  // number_of_cities
  // number_of_roads
  // road_info
  transportation_hub__msg__RoadInfo__Sequence__fini(&msg->road_info);
  // src_city
  // des_city
}

bool
transportation_hub__msg__OverallInfo__are_equal(const transportation_hub__msg__OverallInfo * lhs, const transportation_hub__msg__OverallInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number_of_cities
  if (lhs->number_of_cities != rhs->number_of_cities) {
    return false;
  }
  // number_of_roads
  if (lhs->number_of_roads != rhs->number_of_roads) {
    return false;
  }
  // road_info
  if (!transportation_hub__msg__RoadInfo__Sequence__are_equal(
      &(lhs->road_info), &(rhs->road_info)))
  {
    return false;
  }
  // src_city
  if (lhs->src_city != rhs->src_city) {
    return false;
  }
  // des_city
  if (lhs->des_city != rhs->des_city) {
    return false;
  }
  return true;
}

bool
transportation_hub__msg__OverallInfo__copy(
  const transportation_hub__msg__OverallInfo * input,
  transportation_hub__msg__OverallInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // number_of_cities
  output->number_of_cities = input->number_of_cities;
  // number_of_roads
  output->number_of_roads = input->number_of_roads;
  // road_info
  if (!transportation_hub__msg__RoadInfo__Sequence__copy(
      &(input->road_info), &(output->road_info)))
  {
    return false;
  }
  // src_city
  output->src_city = input->src_city;
  // des_city
  output->des_city = input->des_city;
  return true;
}

transportation_hub__msg__OverallInfo *
transportation_hub__msg__OverallInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__msg__OverallInfo * msg = (transportation_hub__msg__OverallInfo *)allocator.allocate(sizeof(transportation_hub__msg__OverallInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(transportation_hub__msg__OverallInfo));
  bool success = transportation_hub__msg__OverallInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
transportation_hub__msg__OverallInfo__destroy(transportation_hub__msg__OverallInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    transportation_hub__msg__OverallInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
transportation_hub__msg__OverallInfo__Sequence__init(transportation_hub__msg__OverallInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__msg__OverallInfo * data = NULL;

  if (size) {
    data = (transportation_hub__msg__OverallInfo *)allocator.zero_allocate(size, sizeof(transportation_hub__msg__OverallInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = transportation_hub__msg__OverallInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        transportation_hub__msg__OverallInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
transportation_hub__msg__OverallInfo__Sequence__fini(transportation_hub__msg__OverallInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      transportation_hub__msg__OverallInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

transportation_hub__msg__OverallInfo__Sequence *
transportation_hub__msg__OverallInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__msg__OverallInfo__Sequence * array = (transportation_hub__msg__OverallInfo__Sequence *)allocator.allocate(sizeof(transportation_hub__msg__OverallInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = transportation_hub__msg__OverallInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
transportation_hub__msg__OverallInfo__Sequence__destroy(transportation_hub__msg__OverallInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    transportation_hub__msg__OverallInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
transportation_hub__msg__OverallInfo__Sequence__are_equal(const transportation_hub__msg__OverallInfo__Sequence * lhs, const transportation_hub__msg__OverallInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!transportation_hub__msg__OverallInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
transportation_hub__msg__OverallInfo__Sequence__copy(
  const transportation_hub__msg__OverallInfo__Sequence * input,
  transportation_hub__msg__OverallInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(transportation_hub__msg__OverallInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    transportation_hub__msg__OverallInfo * data =
      (transportation_hub__msg__OverallInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!transportation_hub__msg__OverallInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          transportation_hub__msg__OverallInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!transportation_hub__msg__OverallInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
