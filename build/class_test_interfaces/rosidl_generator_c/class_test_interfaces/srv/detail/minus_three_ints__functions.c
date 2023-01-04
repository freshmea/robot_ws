// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from class_test_interfaces:srv/MinusThreeInts.idl
// generated code does not contain a copyright notice
#include "class_test_interfaces/srv/detail/minus_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
class_test_interfaces__srv__MinusThreeInts_Request__init(class_test_interfaces__srv__MinusThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
class_test_interfaces__srv__MinusThreeInts_Request__fini(class_test_interfaces__srv__MinusThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
class_test_interfaces__srv__MinusThreeInts_Request__are_equal(const class_test_interfaces__srv__MinusThreeInts_Request * lhs, const class_test_interfaces__srv__MinusThreeInts_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
class_test_interfaces__srv__MinusThreeInts_Request__copy(
  const class_test_interfaces__srv__MinusThreeInts_Request * input,
  class_test_interfaces__srv__MinusThreeInts_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

class_test_interfaces__srv__MinusThreeInts_Request *
class_test_interfaces__srv__MinusThreeInts_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__srv__MinusThreeInts_Request * msg = (class_test_interfaces__srv__MinusThreeInts_Request *)allocator.allocate(sizeof(class_test_interfaces__srv__MinusThreeInts_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__srv__MinusThreeInts_Request));
  bool success = class_test_interfaces__srv__MinusThreeInts_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__srv__MinusThreeInts_Request__destroy(class_test_interfaces__srv__MinusThreeInts_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__srv__MinusThreeInts_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__srv__MinusThreeInts_Request__Sequence__init(class_test_interfaces__srv__MinusThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__srv__MinusThreeInts_Request * data = NULL;

  if (size) {
    data = (class_test_interfaces__srv__MinusThreeInts_Request *)allocator.zero_allocate(size, sizeof(class_test_interfaces__srv__MinusThreeInts_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__srv__MinusThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__srv__MinusThreeInts_Request__fini(&data[i - 1]);
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
class_test_interfaces__srv__MinusThreeInts_Request__Sequence__fini(class_test_interfaces__srv__MinusThreeInts_Request__Sequence * array)
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
      class_test_interfaces__srv__MinusThreeInts_Request__fini(&array->data[i]);
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

class_test_interfaces__srv__MinusThreeInts_Request__Sequence *
class_test_interfaces__srv__MinusThreeInts_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__srv__MinusThreeInts_Request__Sequence * array = (class_test_interfaces__srv__MinusThreeInts_Request__Sequence *)allocator.allocate(sizeof(class_test_interfaces__srv__MinusThreeInts_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__srv__MinusThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__srv__MinusThreeInts_Request__Sequence__destroy(class_test_interfaces__srv__MinusThreeInts_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__srv__MinusThreeInts_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__srv__MinusThreeInts_Request__Sequence__are_equal(const class_test_interfaces__srv__MinusThreeInts_Request__Sequence * lhs, const class_test_interfaces__srv__MinusThreeInts_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__srv__MinusThreeInts_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__srv__MinusThreeInts_Request__Sequence__copy(
  const class_test_interfaces__srv__MinusThreeInts_Request__Sequence * input,
  class_test_interfaces__srv__MinusThreeInts_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__srv__MinusThreeInts_Request);
    class_test_interfaces__srv__MinusThreeInts_Request * data =
      (class_test_interfaces__srv__MinusThreeInts_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__srv__MinusThreeInts_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__srv__MinusThreeInts_Request__fini(&data[i]);
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
    if (!class_test_interfaces__srv__MinusThreeInts_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
class_test_interfaces__srv__MinusThreeInts_Response__init(class_test_interfaces__srv__MinusThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
class_test_interfaces__srv__MinusThreeInts_Response__fini(class_test_interfaces__srv__MinusThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
class_test_interfaces__srv__MinusThreeInts_Response__are_equal(const class_test_interfaces__srv__MinusThreeInts_Response * lhs, const class_test_interfaces__srv__MinusThreeInts_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
class_test_interfaces__srv__MinusThreeInts_Response__copy(
  const class_test_interfaces__srv__MinusThreeInts_Response * input,
  class_test_interfaces__srv__MinusThreeInts_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

class_test_interfaces__srv__MinusThreeInts_Response *
class_test_interfaces__srv__MinusThreeInts_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__srv__MinusThreeInts_Response * msg = (class_test_interfaces__srv__MinusThreeInts_Response *)allocator.allocate(sizeof(class_test_interfaces__srv__MinusThreeInts_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(class_test_interfaces__srv__MinusThreeInts_Response));
  bool success = class_test_interfaces__srv__MinusThreeInts_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
class_test_interfaces__srv__MinusThreeInts_Response__destroy(class_test_interfaces__srv__MinusThreeInts_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    class_test_interfaces__srv__MinusThreeInts_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
class_test_interfaces__srv__MinusThreeInts_Response__Sequence__init(class_test_interfaces__srv__MinusThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__srv__MinusThreeInts_Response * data = NULL;

  if (size) {
    data = (class_test_interfaces__srv__MinusThreeInts_Response *)allocator.zero_allocate(size, sizeof(class_test_interfaces__srv__MinusThreeInts_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = class_test_interfaces__srv__MinusThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        class_test_interfaces__srv__MinusThreeInts_Response__fini(&data[i - 1]);
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
class_test_interfaces__srv__MinusThreeInts_Response__Sequence__fini(class_test_interfaces__srv__MinusThreeInts_Response__Sequence * array)
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
      class_test_interfaces__srv__MinusThreeInts_Response__fini(&array->data[i]);
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

class_test_interfaces__srv__MinusThreeInts_Response__Sequence *
class_test_interfaces__srv__MinusThreeInts_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  class_test_interfaces__srv__MinusThreeInts_Response__Sequence * array = (class_test_interfaces__srv__MinusThreeInts_Response__Sequence *)allocator.allocate(sizeof(class_test_interfaces__srv__MinusThreeInts_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = class_test_interfaces__srv__MinusThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
class_test_interfaces__srv__MinusThreeInts_Response__Sequence__destroy(class_test_interfaces__srv__MinusThreeInts_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    class_test_interfaces__srv__MinusThreeInts_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
class_test_interfaces__srv__MinusThreeInts_Response__Sequence__are_equal(const class_test_interfaces__srv__MinusThreeInts_Response__Sequence * lhs, const class_test_interfaces__srv__MinusThreeInts_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!class_test_interfaces__srv__MinusThreeInts_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
class_test_interfaces__srv__MinusThreeInts_Response__Sequence__copy(
  const class_test_interfaces__srv__MinusThreeInts_Response__Sequence * input,
  class_test_interfaces__srv__MinusThreeInts_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(class_test_interfaces__srv__MinusThreeInts_Response);
    class_test_interfaces__srv__MinusThreeInts_Response * data =
      (class_test_interfaces__srv__MinusThreeInts_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!class_test_interfaces__srv__MinusThreeInts_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          class_test_interfaces__srv__MinusThreeInts_Response__fini(&data[i]);
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
    if (!class_test_interfaces__srv__MinusThreeInts_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
