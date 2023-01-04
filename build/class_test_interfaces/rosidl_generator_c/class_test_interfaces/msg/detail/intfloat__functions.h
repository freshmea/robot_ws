// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from class_test_interfaces:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__FUNCTIONS_H_
#define CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "class_test_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "class_test_interfaces/msg/detail/intfloat__struct.h"

/// Initialize msg/Intfloat message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * class_test_interfaces__msg__Intfloat
 * )) before or use
 * class_test_interfaces__msg__Intfloat__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
bool
class_test_interfaces__msg__Intfloat__init(class_test_interfaces__msg__Intfloat * msg);

/// Finalize msg/Intfloat message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
void
class_test_interfaces__msg__Intfloat__fini(class_test_interfaces__msg__Intfloat * msg);

/// Create msg/Intfloat message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * class_test_interfaces__msg__Intfloat__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
class_test_interfaces__msg__Intfloat *
class_test_interfaces__msg__Intfloat__create();

/// Destroy msg/Intfloat message.
/**
 * It calls
 * class_test_interfaces__msg__Intfloat__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
void
class_test_interfaces__msg__Intfloat__destroy(class_test_interfaces__msg__Intfloat * msg);

/// Check for msg/Intfloat message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
bool
class_test_interfaces__msg__Intfloat__are_equal(const class_test_interfaces__msg__Intfloat * lhs, const class_test_interfaces__msg__Intfloat * rhs);

/// Copy a msg/Intfloat message.
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
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
bool
class_test_interfaces__msg__Intfloat__copy(
  const class_test_interfaces__msg__Intfloat * input,
  class_test_interfaces__msg__Intfloat * output);

/// Initialize array of msg/Intfloat messages.
/**
 * It allocates the memory for the number of elements and calls
 * class_test_interfaces__msg__Intfloat__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
bool
class_test_interfaces__msg__Intfloat__Sequence__init(class_test_interfaces__msg__Intfloat__Sequence * array, size_t size);

/// Finalize array of msg/Intfloat messages.
/**
 * It calls
 * class_test_interfaces__msg__Intfloat__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
void
class_test_interfaces__msg__Intfloat__Sequence__fini(class_test_interfaces__msg__Intfloat__Sequence * array);

/// Create array of msg/Intfloat messages.
/**
 * It allocates the memory for the array and calls
 * class_test_interfaces__msg__Intfloat__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
class_test_interfaces__msg__Intfloat__Sequence *
class_test_interfaces__msg__Intfloat__Sequence__create(size_t size);

/// Destroy array of msg/Intfloat messages.
/**
 * It calls
 * class_test_interfaces__msg__Intfloat__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
void
class_test_interfaces__msg__Intfloat__Sequence__destroy(class_test_interfaces__msg__Intfloat__Sequence * array);

/// Check for msg/Intfloat message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
bool
class_test_interfaces__msg__Intfloat__Sequence__are_equal(const class_test_interfaces__msg__Intfloat__Sequence * lhs, const class_test_interfaces__msg__Intfloat__Sequence * rhs);

/// Copy an array of msg/Intfloat messages.
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
ROSIDL_GENERATOR_C_PUBLIC_class_test_interfaces
bool
class_test_interfaces__msg__Intfloat__Sequence__copy(
  const class_test_interfaces__msg__Intfloat__Sequence * input,
  class_test_interfaces__msg__Intfloat__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__FUNCTIONS_H_
