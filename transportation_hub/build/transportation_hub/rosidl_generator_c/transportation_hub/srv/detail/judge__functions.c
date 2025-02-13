// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from transportation_hub:srv/Judge.idl
// generated code does not contain a copyright notice
#include "transportation_hub/srv/detail/judge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `path`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
transportation_hub__srv__Judge_Request__init(transportation_hub__srv__Judge_Request * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->path, 0)) {
    transportation_hub__srv__Judge_Request__fini(msg);
    return false;
  }
  return true;
}

void
transportation_hub__srv__Judge_Request__fini(transportation_hub__srv__Judge_Request * msg)
{
  if (!msg) {
    return;
  }
  // path
  rosidl_runtime_c__int32__Sequence__fini(&msg->path);
}

bool
transportation_hub__srv__Judge_Request__are_equal(const transportation_hub__srv__Judge_Request * lhs, const transportation_hub__srv__Judge_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
transportation_hub__srv__Judge_Request__copy(
  const transportation_hub__srv__Judge_Request * input,
  transportation_hub__srv__Judge_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

transportation_hub__srv__Judge_Request *
transportation_hub__srv__Judge_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__srv__Judge_Request * msg = (transportation_hub__srv__Judge_Request *)allocator.allocate(sizeof(transportation_hub__srv__Judge_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(transportation_hub__srv__Judge_Request));
  bool success = transportation_hub__srv__Judge_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
transportation_hub__srv__Judge_Request__destroy(transportation_hub__srv__Judge_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    transportation_hub__srv__Judge_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
transportation_hub__srv__Judge_Request__Sequence__init(transportation_hub__srv__Judge_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__srv__Judge_Request * data = NULL;

  if (size) {
    data = (transportation_hub__srv__Judge_Request *)allocator.zero_allocate(size, sizeof(transportation_hub__srv__Judge_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = transportation_hub__srv__Judge_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        transportation_hub__srv__Judge_Request__fini(&data[i - 1]);
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
transportation_hub__srv__Judge_Request__Sequence__fini(transportation_hub__srv__Judge_Request__Sequence * array)
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
      transportation_hub__srv__Judge_Request__fini(&array->data[i]);
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

transportation_hub__srv__Judge_Request__Sequence *
transportation_hub__srv__Judge_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__srv__Judge_Request__Sequence * array = (transportation_hub__srv__Judge_Request__Sequence *)allocator.allocate(sizeof(transportation_hub__srv__Judge_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = transportation_hub__srv__Judge_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
transportation_hub__srv__Judge_Request__Sequence__destroy(transportation_hub__srv__Judge_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    transportation_hub__srv__Judge_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
transportation_hub__srv__Judge_Request__Sequence__are_equal(const transportation_hub__srv__Judge_Request__Sequence * lhs, const transportation_hub__srv__Judge_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!transportation_hub__srv__Judge_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
transportation_hub__srv__Judge_Request__Sequence__copy(
  const transportation_hub__srv__Judge_Request__Sequence * input,
  transportation_hub__srv__Judge_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(transportation_hub__srv__Judge_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    transportation_hub__srv__Judge_Request * data =
      (transportation_hub__srv__Judge_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!transportation_hub__srv__Judge_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          transportation_hub__srv__Judge_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!transportation_hub__srv__Judge_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
transportation_hub__srv__Judge_Response__init(transportation_hub__srv__Judge_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
transportation_hub__srv__Judge_Response__fini(transportation_hub__srv__Judge_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
transportation_hub__srv__Judge_Response__are_equal(const transportation_hub__srv__Judge_Response * lhs, const transportation_hub__srv__Judge_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
transportation_hub__srv__Judge_Response__copy(
  const transportation_hub__srv__Judge_Response * input,
  transportation_hub__srv__Judge_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

transportation_hub__srv__Judge_Response *
transportation_hub__srv__Judge_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__srv__Judge_Response * msg = (transportation_hub__srv__Judge_Response *)allocator.allocate(sizeof(transportation_hub__srv__Judge_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(transportation_hub__srv__Judge_Response));
  bool success = transportation_hub__srv__Judge_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
transportation_hub__srv__Judge_Response__destroy(transportation_hub__srv__Judge_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    transportation_hub__srv__Judge_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
transportation_hub__srv__Judge_Response__Sequence__init(transportation_hub__srv__Judge_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__srv__Judge_Response * data = NULL;

  if (size) {
    data = (transportation_hub__srv__Judge_Response *)allocator.zero_allocate(size, sizeof(transportation_hub__srv__Judge_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = transportation_hub__srv__Judge_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        transportation_hub__srv__Judge_Response__fini(&data[i - 1]);
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
transportation_hub__srv__Judge_Response__Sequence__fini(transportation_hub__srv__Judge_Response__Sequence * array)
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
      transportation_hub__srv__Judge_Response__fini(&array->data[i]);
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

transportation_hub__srv__Judge_Response__Sequence *
transportation_hub__srv__Judge_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  transportation_hub__srv__Judge_Response__Sequence * array = (transportation_hub__srv__Judge_Response__Sequence *)allocator.allocate(sizeof(transportation_hub__srv__Judge_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = transportation_hub__srv__Judge_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
transportation_hub__srv__Judge_Response__Sequence__destroy(transportation_hub__srv__Judge_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    transportation_hub__srv__Judge_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
transportation_hub__srv__Judge_Response__Sequence__are_equal(const transportation_hub__srv__Judge_Response__Sequence * lhs, const transportation_hub__srv__Judge_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!transportation_hub__srv__Judge_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
transportation_hub__srv__Judge_Response__Sequence__copy(
  const transportation_hub__srv__Judge_Response__Sequence * input,
  transportation_hub__srv__Judge_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(transportation_hub__srv__Judge_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    transportation_hub__srv__Judge_Response * data =
      (transportation_hub__srv__Judge_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!transportation_hub__srv__Judge_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          transportation_hub__srv__Judge_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!transportation_hub__srv__Judge_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
