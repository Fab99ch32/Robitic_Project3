// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ro45_portalrobot_interfaces:msg/RobotPos.idl
// generated code does not contain a copyright notice

#ifndef RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__FUNCTIONS_H_
#define RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ro45_portalrobot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ro45_portalrobot_interfaces/msg/detail/robot_pos__struct.h"

/// Initialize msg/RobotPos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ro45_portalrobot_interfaces__msg__RobotPos
 * )) before or use
 * ro45_portalrobot_interfaces__msg__RobotPos__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
bool
ro45_portalrobot_interfaces__msg__RobotPos__init(ro45_portalrobot_interfaces__msg__RobotPos * msg);

/// Finalize msg/RobotPos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
void
ro45_portalrobot_interfaces__msg__RobotPos__fini(ro45_portalrobot_interfaces__msg__RobotPos * msg);

/// Create msg/RobotPos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ro45_portalrobot_interfaces__msg__RobotPos__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
ro45_portalrobot_interfaces__msg__RobotPos *
ro45_portalrobot_interfaces__msg__RobotPos__create();

/// Destroy msg/RobotPos message.
/**
 * It calls
 * ro45_portalrobot_interfaces__msg__RobotPos__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
void
ro45_portalrobot_interfaces__msg__RobotPos__destroy(ro45_portalrobot_interfaces__msg__RobotPos * msg);

/// Check for msg/RobotPos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
bool
ro45_portalrobot_interfaces__msg__RobotPos__are_equal(const ro45_portalrobot_interfaces__msg__RobotPos * lhs, const ro45_portalrobot_interfaces__msg__RobotPos * rhs);

/// Copy a msg/RobotPos message.
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
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
bool
ro45_portalrobot_interfaces__msg__RobotPos__copy(
  const ro45_portalrobot_interfaces__msg__RobotPos * input,
  ro45_portalrobot_interfaces__msg__RobotPos * output);

/// Initialize array of msg/RobotPos messages.
/**
 * It allocates the memory for the number of elements and calls
 * ro45_portalrobot_interfaces__msg__RobotPos__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
bool
ro45_portalrobot_interfaces__msg__RobotPos__Sequence__init(ro45_portalrobot_interfaces__msg__RobotPos__Sequence * array, size_t size);

/// Finalize array of msg/RobotPos messages.
/**
 * It calls
 * ro45_portalrobot_interfaces__msg__RobotPos__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
void
ro45_portalrobot_interfaces__msg__RobotPos__Sequence__fini(ro45_portalrobot_interfaces__msg__RobotPos__Sequence * array);

/// Create array of msg/RobotPos messages.
/**
 * It allocates the memory for the array and calls
 * ro45_portalrobot_interfaces__msg__RobotPos__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
ro45_portalrobot_interfaces__msg__RobotPos__Sequence *
ro45_portalrobot_interfaces__msg__RobotPos__Sequence__create(size_t size);

/// Destroy array of msg/RobotPos messages.
/**
 * It calls
 * ro45_portalrobot_interfaces__msg__RobotPos__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
void
ro45_portalrobot_interfaces__msg__RobotPos__Sequence__destroy(ro45_portalrobot_interfaces__msg__RobotPos__Sequence * array);

/// Check for msg/RobotPos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
bool
ro45_portalrobot_interfaces__msg__RobotPos__Sequence__are_equal(const ro45_portalrobot_interfaces__msg__RobotPos__Sequence * lhs, const ro45_portalrobot_interfaces__msg__RobotPos__Sequence * rhs);

/// Copy an array of msg/RobotPos messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ro45_portalrobot_interfaces
bool
ro45_portalrobot_interfaces__msg__RobotPos__Sequence__copy(
  const ro45_portalrobot_interfaces__msg__RobotPos__Sequence * input,
  ro45_portalrobot_interfaces__msg__RobotPos__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RO45_PORTALROBOT_INTERFACES__MSG__DETAIL__ROBOT_POS__FUNCTIONS_H_
