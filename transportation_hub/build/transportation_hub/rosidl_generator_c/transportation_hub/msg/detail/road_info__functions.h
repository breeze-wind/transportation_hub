// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from transportation_hub:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__FUNCTIONS_H_
#define TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "transportation_hub/msg/rosidl_generator_c__visibility_control.h"

#include "transportation_hub/msg/detail/road_info__struct.h"

/// Initialize msg/RoadInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * transportation_hub__msg__RoadInfo
 * )) before or use
 * transportation_hub__msg__RoadInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
bool
transportation_hub__msg__RoadInfo__init(transportation_hub__msg__RoadInfo * msg);

/// Finalize msg/RoadInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
void
transportation_hub__msg__RoadInfo__fini(transportation_hub__msg__RoadInfo * msg);

/// Create msg/RoadInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * transportation_hub__msg__RoadInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
transportation_hub__msg__RoadInfo *
transportation_hub__msg__RoadInfo__create();

/// Destroy msg/RoadInfo message.
/**
 * It calls
 * transportation_hub__msg__RoadInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
void
transportation_hub__msg__RoadInfo__destroy(transportation_hub__msg__RoadInfo * msg);

/// Check for msg/RoadInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
bool
transportation_hub__msg__RoadInfo__are_equal(const transportation_hub__msg__RoadInfo * lhs, const transportation_hub__msg__RoadInfo * rhs);

/// Copy a msg/RoadInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
bool
transportation_hub__msg__RoadInfo__copy(
  const transportation_hub__msg__RoadInfo * input,
  transportation_hub__msg__RoadInfo * output);

/// Initialize array of msg/RoadInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * transportation_hub__msg__RoadInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
bool
transportation_hub__msg__RoadInfo__Sequence__init(transportation_hub__msg__RoadInfo__Sequence * array, size_t size);

/// Finalize array of msg/RoadInfo messages.
/**
 * It calls
 * transportation_hub__msg__RoadInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
void
transportation_hub__msg__RoadInfo__Sequence__fini(transportation_hub__msg__RoadInfo__Sequence * array);

/// Create array of msg/RoadInfo messages.
/**
 * It allocates the memory for the array and calls
 * transportation_hub__msg__RoadInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
transportation_hub__msg__RoadInfo__Sequence *
transportation_hub__msg__RoadInfo__Sequence__create(size_t size);

/// Destroy array of msg/RoadInfo messages.
/**
 * It calls
 * transportation_hub__msg__RoadInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
void
transportation_hub__msg__RoadInfo__Sequence__destroy(transportation_hub__msg__RoadInfo__Sequence * array);

/// Check for msg/RoadInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
bool
transportation_hub__msg__RoadInfo__Sequence__are_equal(const transportation_hub__msg__RoadInfo__Sequence * lhs, const transportation_hub__msg__RoadInfo__Sequence * rhs);

/// Copy an array of msg/RoadInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_transportation_hub
bool
transportation_hub__msg__RoadInfo__Sequence__copy(
  const transportation_hub__msg__RoadInfo__Sequence * input,
  transportation_hub__msg__RoadInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__FUNCTIONS_H_
