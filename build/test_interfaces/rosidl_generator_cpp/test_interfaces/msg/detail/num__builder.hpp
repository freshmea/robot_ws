// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define TEST_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include "test_interfaces/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::msg::Num>()
{
  return ::test_interfaces::msg::Num(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
