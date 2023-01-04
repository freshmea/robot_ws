// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from class_test_interfaces:srv/MinusThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_H_
#define CLASS_TEST_INTERFACES__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MinusThreeInts in the package class_test_interfaces.
typedef struct class_test_interfaces__srv__MinusThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} class_test_interfaces__srv__MinusThreeInts_Request;

// Struct for a sequence of class_test_interfaces__srv__MinusThreeInts_Request.
typedef struct class_test_interfaces__srv__MinusThreeInts_Request__Sequence
{
  class_test_interfaces__srv__MinusThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} class_test_interfaces__srv__MinusThreeInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MinusThreeInts in the package class_test_interfaces.
typedef struct class_test_interfaces__srv__MinusThreeInts_Response
{
  int64_t sum;
} class_test_interfaces__srv__MinusThreeInts_Response;

// Struct for a sequence of class_test_interfaces__srv__MinusThreeInts_Response.
typedef struct class_test_interfaces__srv__MinusThreeInts_Response__Sequence
{
  class_test_interfaces__srv__MinusThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} class_test_interfaces__srv__MinusThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLASS_TEST_INTERFACES__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_H_
