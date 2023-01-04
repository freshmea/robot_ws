// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from class_test_interfaces:msg/Intfloat.idl
// generated code does not contain a copyright notice
#include "class_test_interfaces/msg/detail/intfloat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
class_test_interfaces__msg__Intfloat__init(class_test_interfaces__msg__Intfloat * msg)
{
  if (!msg) {
    return false;
  }
  // intnum
  // floatnum
  return true;
}

void
class_test_interfaces__msg__Intfloat__fini(class_test_interfaces__msg__Intfloat * msg)
{
  if (!msg) {
    return;
  }
  // intnum
  // floatnum
}

bool
class_test_interfaces__msg__Intfloat__are_equal(const class_test_interfaces__msg__Intfloat * lhs, const class_test_interfaces__msg__Intfloat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // intnum
  if (lhs->intnum != rhs->intnum) {
    return false;
  }
  // floatnum
  if (lhs->floatnum != rhs->floatnum) {
    return false;
  }
  return true;
}

bool
class_test_interfaces__msg__Intfloat__copy(
  const class_test_interfaces__msg__Intfloat * input,
  class_test_interfaces__msg__Intfloat * output)
{
  if (!input || !output) {
    return false;
  }
  // intnum
  output->intnum = input->intnum;
  // floatnum
  output->floatnum = input->floatnum;
  return true;
}

class_test_interfaces__msg__Intfloat *
class_test_interfaces__msg__Intfloat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__msg__Intfloat * msg = (class_test_interfaces__msg__Intfloat *)allocator.allocate(sizeof(class_test_interfaces__msg__Intfloat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__msg__Intfloat));
  bool success = class_test_interfaces__msg__Intfloat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__msg__Intfloat__destroy(class_test_interfaces__msg__Intfloat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__msg__Intfloat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__msg__Intfloat__Sequence__init(class_test_interfaces__msg__Intfloat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__msg__Intfloat * data = NULL;

  if (size) {
    data = (class_test_interfaces__msg__Intfloat *)allocator.zero_allocate(size, sizeof(class_test_interfaces__msg__Intfloat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__msg__Intfloat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__msg__Intfloat__fini(&data[i - 1]);
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
class_test_interfaces__msg__Intfloat__Sequence__fini(class_test_interfaces__msg__Intfloat__Sequence * array)
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
      class_test_interfaces__msg__Intfloat__fini(&array->data[i]);
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

class_test_interfaces__msg__Intfloat__Sequence *
class_test_interfaces__msg__Intfloat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__msg__Intfloat__Sequence * array = (class_test_interfaces__msg__Intfloat__Sequence *)allocator.allocate(sizeof(class_test_interfaces__msg__Intfloat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__msg__Intfloat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__msg__Intfloat__Sequence__destroy(class_test_interfaces__msg__Intfloat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__msg__Intfloat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__msg__Intfloat__Sequence__are_equal(const class_test_interfaces__msg__Intfloat__Sequence * lhs, const class_test_interfaces__msg__Intfloat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__msg__Intfloat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__msg__Intfloat__Sequence__copy(
  const class_test_interfaces__msg__Intfloat__Sequence * input,
  class_test_interfaces__msg__Intfloat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__msg__Intfloat);
    class_test_interfaces__msg__Intfloat * data =
      (class_test_interfaces__msg__Intfloat *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__msg__Intfloat__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__msg__Intfloat__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!class_test_interfaces__msg__Intfloat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
