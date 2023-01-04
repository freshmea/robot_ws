// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from class_test_interfaces:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__STRUCT_H_
#define CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Intfloat in the package class_test_interfaces.
typedef struct class_test_interfaces__msg__Intfloat
{
  int64_t intnum;
  double floatnum;
} class_test_interfaces__msg__Intfloat;

// Struct for a sequence of class_test_interfaces__msg__Intfloat.
typedef struct class_test_interfaces__msg__Intfloat__Sequence
{
  class_test_interfaces__msg__Intfloat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} class_test_interfaces__msg__Intfloat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__STRUCT_H_
