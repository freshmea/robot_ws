// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
#define TEST_INTERFACES__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_

#include "test_interfaces/action/detail/fibonacci__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Goal_number
{
public:
  Init_Fibonacci_Goal_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_interfaces::action::Fibonacci_Goal number(::test_interfaces::action::Fibonacci_Goal::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_Goal>()
{
  return test_interfaces::action::builder::Init_Fibonacci_Goal_number();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Result_array
{
public:
  Init_Fibonacci_Result_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_interfaces::action::Fibonacci_Result array(::test_interfaces::action::Fibonacci_Result::_array_type arg)
  {
    msg_.array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_Result>()
{
  return test_interfaces::action::builder::Init_Fibonacci_Result_array();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Feedback_part_array
{
public:
  Init_Fibonacci_Feedback_part_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_interfaces::action::Fibonacci_Feedback part_array(::test_interfaces::action::Fibonacci_Feedback::_part_array_type arg)
  {
    msg_.part_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_Feedback>()
{
  return test_interfaces::action::builder::Init_Fibonacci_Feedback_part_array();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Request_goal
{
public:
  explicit Init_Fibonacci_SendGoal_Request_goal(::test_interfaces::action::Fibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::test_interfaces::action::Fibonacci_SendGoal_Request goal(::test_interfaces::action::Fibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_SendGoal_Request msg_;
};

class Init_Fibonacci_SendGoal_Request_goal_id
{
public:
  Init_Fibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Request_goal goal_id(::test_interfaces::action::Fibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return test_interfaces::action::builder::Init_Fibonacci_SendGoal_Request_goal_id();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibonacci_SendGoal_Response_stamp(::test_interfaces::action::Fibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::test_interfaces::action::Fibonacci_SendGoal_Response stamp(::test_interfaces::action::Fibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_SendGoal_Response msg_;
};

class Init_Fibonacci_SendGoal_Response_accepted
{
public:
  Init_Fibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Response_stamp accepted(::test_interfaces::action::Fibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return test_interfaces::action::builder::Init_Fibonacci_SendGoal_Response_accepted();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Request_goal_id
{
public:
  Init_Fibonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_interfaces::action::Fibonacci_GetResult_Request goal_id(::test_interfaces::action::Fibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_GetResult_Request>()
{
  return test_interfaces::action::builder::Init_Fibonacci_GetResult_Request_goal_id();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Response_result
{
public:
  explicit Init_Fibonacci_GetResult_Response_result(::test_interfaces::action::Fibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::test_interfaces::action::Fibonacci_GetResult_Response result(::test_interfaces::action::Fibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_GetResult_Response msg_;
};

class Init_Fibonacci_GetResult_Response_status
{
public:
  Init_Fibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Response_result status(::test_interfaces::action::Fibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibonacci_GetResult_Response_result(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_GetResult_Response>()
{
  return test_interfaces::action::builder::Init_Fibonacci_GetResult_Response_status();
}

}  // namespace test_interfaces


namespace test_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibonacci_FeedbackMessage_feedback(::test_interfaces::action::Fibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::test_interfaces::action::Fibonacci_FeedbackMessage feedback(::test_interfaces::action::Fibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_FeedbackMessage msg_;
};

class Init_Fibonacci_FeedbackMessage_goal_id
{
public:
  Init_Fibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_FeedbackMessage_feedback goal_id(::test_interfaces::action::Fibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::test_interfaces::action::Fibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return test_interfaces::action::builder::Init_Fibonacci_FeedbackMessage_goal_id();
}

}  // namespace test_interfaces

#endif  // TEST_INTERFACES__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
