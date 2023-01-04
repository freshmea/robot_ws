// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from class_test_interfaces:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__BUILDER_HPP_
#define CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__BUILDER_HPP_

#include "class_test_interfaces/msg/detail/intfloat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace class_test_interfaces
{

namespace msg
{

namespace builder
{

class Init_Intfloat_floatnum
{
public:
  explicit Init_Intfloat_floatnum(::class_test_interfaces::msg::Intfloat & msg)
  : msg_(msg)
  {}
  ::class_test_interfaces::msg::Intfloat floatnum(::class_test_interfaces::msg::Intfloat::_floatnum_type arg)
  {
    msg_.floatnum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::class_test_interfaces::msg::Intfloat msg_;
};

class Init_Intfloat_intnum
{
public:
  Init_Intfloat_intnum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Intfloat_floatnum intnum(::class_test_interfaces::msg::Intfloat::_intnum_type arg)
  {
    msg_.intnum = std::move(arg);
    return Init_Intfloat_floatnum(msg_);
  }

private:
  ::class_test_interfaces::msg::Intfloat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::class_test_interfaces::msg::Intfloat>()
{
  return class_test_interfaces::msg::builder::Init_Intfloat_intnum();
}

}  // namespace class_test_interfaces

#endif  // CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__BUILDER_HPP_
