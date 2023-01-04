// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from class_test_interfaces:msg/Intfloat.idl
// generated code does not contain a copyright notice
#include "class_test_interfaces/msg/detail/intfloat__rosidl_typesupport_fastrtps_cpp.hpp"
#include "class_test_interfaces/msg/detail/intfloat__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace class_test_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_class_test_interfaces
cdr_serialize(
  const class_test_interfaces::msg::Intfloat & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: intnum
  cdr << ros_message.intnum;
  // Member: floatnum
  cdr << ros_message.floatnum;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_class_test_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  class_test_interfaces::msg::Intfloat & ros_message)
{
  // Member: intnum
  cdr >> ros_message.intnum;

  // Member: floatnum
  cdr >> ros_message.floatnum;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_class_test_interfaces
get_serialized_size(
  const class_test_interfaces::msg::Intfloat & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: intnum
  {
    size_t item_size = sizeof(ros_message.intnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: floatnum
  {
    size_t item_size = sizeof(ros_message.floatnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_class_test_interfaces
max_serialized_size_Intfloat(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: intnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: floatnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Intfloat__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const class_test_interfaces::msg::Intfloat *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Intfloat__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<class_test_interfaces::msg::Intfloat *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Intfloat__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const class_test_interfaces::msg::Intfloat *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Intfloat__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Intfloat(full_bounded, 0);
}

static message_type_support_callbacks_t _Intfloat__callbacks = {
  "class_test_interfaces::msg",
  "Intfloat",
  _Intfloat__cdr_serialize,
  _Intfloat__cdr_deserialize,
  _Intfloat__get_serialized_size,
  _Intfloat__max_serialized_size
};

static rosidl_message_type_support_t _Intfloat__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Intfloat__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace class_test_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_class_test_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<class_test_interfaces::msg::Intfloat>()
{
  return &class_test_interfaces::msg::typesupport_fastrtps_cpp::_Intfloat__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, class_test_interfaces, msg, Intfloat)() {
  return &class_test_interfaces::msg::typesupport_fastrtps_cpp::_Intfloat__handle;
}

#ifdef __cplusplus
}
#endif
