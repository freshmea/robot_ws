// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from class_test_interfaces:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__STRUCT_HPP_
#define CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__class_test_interfaces__msg__Intfloat __attribute__((deprecated))
#else
# define DEPRECATED__class_test_interfaces__msg__Intfloat __declspec(deprecated)
#endif

namespace class_test_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Intfloat_
{
  using Type = Intfloat_<ContainerAllocator>;

  explicit Intfloat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intnum = 0ll;
      this->floatnum = 0.0;
    }
  }

  explicit Intfloat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intnum = 0ll;
      this->floatnum = 0.0;
    }
  }

  // field types and members
  using _intnum_type =
    int64_t;
  _intnum_type intnum;
  using _floatnum_type =
    double;
  _floatnum_type floatnum;

  // setters for named parameter idiom
  Type & set__intnum(
    const int64_t & _arg)
  {
    this->intnum = _arg;
    return *this;
  }
  Type & set__floatnum(
    const double & _arg)
  {
    this->floatnum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    class_test_interfaces::msg::Intfloat_<ContainerAllocator> *;
  using ConstRawPtr =
    const class_test_interfaces::msg::Intfloat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      class_test_interfaces::msg::Intfloat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      class_test_interfaces::msg::Intfloat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__class_test_interfaces__msg__Intfloat
    std::shared_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__class_test_interfaces__msg__Intfloat
    std::shared_ptr<class_test_interfaces::msg::Intfloat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Intfloat_ & other) const
  {
    if (this->intnum != other.intnum) {
      return false;
    }
    if (this->floatnum != other.floatnum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Intfloat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Intfloat_

// alias to use template instance with default allocator
using Intfloat =
  class_test_interfaces::msg::Intfloat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace class_test_interfaces

#endif  // CLASS_TEST_INTERFACES__MSG__DETAIL__INTFLOAT__STRUCT_HPP_
