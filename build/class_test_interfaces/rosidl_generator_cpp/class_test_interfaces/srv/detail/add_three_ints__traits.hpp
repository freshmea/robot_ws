// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from class_test_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
#define CLASS_TEST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_

#include "class_test_interfaces/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::srv::AddThreeInts_Request>()
{
  return "class_test_interfaces::srv::AddThreeInts_Request";
}

template<>
inline const char * name<class_test_interfaces::srv::AddThreeInts_Request>()
{
  return "class_test_interfaces/srv/AddThreeInts_Request";
}

template<>
struct has_fixed_size<class_test_interfaces::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<class_test_interfaces::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<class_test_interfaces::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::srv::AddThreeInts_Response>()
{
  return "class_test_interfaces::srv::AddThreeInts_Response";
}

template<>
inline const char * name<class_test_interfaces::srv::AddThreeInts_Response>()
{
  return "class_test_interfaces/srv/AddThreeInts_Response";
}

template<>
struct has_fixed_size<class_test_interfaces::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<class_test_interfaces::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<class_test_interfaces::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<class_test_interfaces::srv::AddThreeInts>()
{
  return "class_test_interfaces::srv::AddThreeInts";
}

template<>
inline const char * name<class_test_interfaces::srv::AddThreeInts>()
{
  return "class_test_interfaces/srv/AddThreeInts";
}

template<>
struct has_fixed_size<class_test_interfaces::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<class_test_interfaces::srv::AddThreeInts_Request>::value &&
    has_fixed_size<class_test_interfaces::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<class_test_interfaces::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<class_test_interfaces::srv::AddThreeInts_Request>::value &&
    has_bounded_size<class_test_interfaces::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<class_test_interfaces::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<class_test_interfaces::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<class_test_interfaces::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CLASS_TEST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
