// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from class_test_interfaces:srv/MinusThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__SRV__DETAIL__MINUS_THREE_INTS__TRAITS_HPP_
#define CLASS_TEST_INTERFACES__SRV__DETAIL__MINUS_THREE_INTS__TRAITS_HPP_

#include "class_test_interfaces/srv/detail/minus_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::srv::MinusThreeInts_Request>()
{
  return "class_test_interfaces::srv::MinusThreeInts_Request";
}

template<>
inline const char * name<class_test_interfaces::srv::MinusThreeInts_Request>()
{
  return "class_test_interfaces/srv/MinusThreeInts_Request";
}

template<>
struct has_fixed_size<class_test_interfaces::srv::MinusThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<class_test_interfaces::srv::MinusThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<class_test_interfaces::srv::MinusThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::srv::MinusThreeInts_Response>()
{
  return "class_test_interfaces::srv::MinusThreeInts_Response";
}

template<>
inline const char * name<class_test_interfaces::srv::MinusThreeInts_Response>()
{
  return "class_test_interfaces/srv/MinusThreeInts_Response";
}

template<>
struct has_fixed_size<class_test_interfaces::srv::MinusThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<class_test_interfaces::srv::MinusThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<class_test_interfaces::srv::MinusThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::srv::MinusThreeInts>()
{
  return "class_test_interfaces::srv::MinusThreeInts";
}

template<>
inline const char * name<class_test_interfaces::srv::MinusThreeInts>()
{
  return "class_test_interfaces/srv/MinusThreeInts";
}

template<>
struct has_fixed_size<class_test_interfaces::srv::MinusThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<class_test_interfaces::srv::MinusThreeInts_Request>::value &&
    has_fixed_size<class_test_interfaces::srv::MinusThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<class_test_interfaces::srv::MinusThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<class_test_interfaces::srv::MinusThreeInts_Request>::value &&
    has_bounded_size<class_test_interfaces::srv::MinusThreeInts_Response>::value
  >
{
};

template<>
struct is_service<class_test_interfaces::srv::MinusThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<class_test_interfaces::srv::MinusThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<class_test_interfaces::srv::MinusThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CLASS_TEST_INTERFACES__SRV__DETAIL__MINUS_THREE_INTS__TRAITS_HPP_
