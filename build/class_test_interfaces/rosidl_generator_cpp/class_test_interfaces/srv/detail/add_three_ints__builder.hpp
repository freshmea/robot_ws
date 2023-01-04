// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from class_test_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define CLASS_TEST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include "class_test_interfaces/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace class_test_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::class_test_interfaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::class_test_interfaces::srv::AddThreeInts_Request c(::class_test_interfaces::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::class_test_interfaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::class_test_interfaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::class_test_interfaces::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::class_test_interfaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::class_test_interfaces::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::class_test_interfaces::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::class_test_interfaces::srv::AddThreeInts_Request>()
{
  return class_test_interfaces::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace class_test_interfaces


namespace class_test_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::class_test_interfaces::srv::AddThreeInts_Response sum(::class_test_interfaces::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::class_test_interfaces::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::class_test_interfaces::srv::AddThreeInts_Response>()
{
  return class_test_interfaces::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace class_test_interfaces

#endif  // CLASS_TEST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
