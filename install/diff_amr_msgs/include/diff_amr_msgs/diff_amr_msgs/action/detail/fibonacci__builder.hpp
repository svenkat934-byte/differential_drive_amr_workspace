// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from diff_amr_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "diff_amr_msgs/action/fibonacci.hpp"


#ifndef DIFF_AMR_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
#define DIFF_AMR_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "diff_amr_msgs/action/detail/fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Goal_order
{
public:
  Init_Fibonacci_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::diff_amr_msgs::action::Fibonacci_Goal order(::diff_amr_msgs::action::Fibonacci_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_Goal>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_Goal_order();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Result_sequence
{
public:
  Init_Fibonacci_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::diff_amr_msgs::action::Fibonacci_Result sequence(::diff_amr_msgs::action::Fibonacci_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_Result>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_Result_sequence();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Feedback_partial_sequence
{
public:
  Init_Fibonacci_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::diff_amr_msgs::action::Fibonacci_Feedback partial_sequence(::diff_amr_msgs::action::Fibonacci_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_Feedback>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_Feedback_partial_sequence();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Request_goal
{
public:
  explicit Init_Fibonacci_SendGoal_Request_goal(::diff_amr_msgs::action::Fibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Request goal(::diff_amr_msgs::action::Fibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Request msg_;
};

class Init_Fibonacci_SendGoal_Request_goal_id
{
public:
  Init_Fibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Request_goal goal_id(::diff_amr_msgs::action::Fibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_SendGoal_Request>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_SendGoal_Request_goal_id();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibonacci_SendGoal_Response_stamp(::diff_amr_msgs::action::Fibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Response stamp(::diff_amr_msgs::action::Fibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Response msg_;
};

class Init_Fibonacci_SendGoal_Response_accepted
{
public:
  Init_Fibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Response_stamp accepted(::diff_amr_msgs::action::Fibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_SendGoal_Response>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_SendGoal_Response_accepted();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Event_response
{
public:
  explicit Init_Fibonacci_SendGoal_Event_response(::diff_amr_msgs::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Event response(::diff_amr_msgs::action::Fibonacci_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_request
{
public:
  explicit Init_Fibonacci_SendGoal_Event_request(::diff_amr_msgs::action::Fibonacci_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_SendGoal_Event_response request(::diff_amr_msgs::action::Fibonacci_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_response(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Event msg_;
};

class Init_Fibonacci_SendGoal_Event_info
{
public:
  Init_Fibonacci_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Event_request info(::diff_amr_msgs::action::Fibonacci_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_SendGoal_Event_request(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_SendGoal_Event>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_SendGoal_Event_info();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
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
  ::diff_amr_msgs::action::Fibonacci_GetResult_Request goal_id(::diff_amr_msgs::action::Fibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_GetResult_Request>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_GetResult_Request_goal_id();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Response_result
{
public:
  explicit Init_Fibonacci_GetResult_Response_result(::diff_amr_msgs::action::Fibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::action::Fibonacci_GetResult_Response result(::diff_amr_msgs::action::Fibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_GetResult_Response msg_;
};

class Init_Fibonacci_GetResult_Response_status
{
public:
  Init_Fibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Response_result status(::diff_amr_msgs::action::Fibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibonacci_GetResult_Response_result(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_GetResult_Response>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_GetResult_Response_status();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Event_response
{
public:
  explicit Init_Fibonacci_GetResult_Event_response(::diff_amr_msgs::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::action::Fibonacci_GetResult_Event response(::diff_amr_msgs::action::Fibonacci_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_request
{
public:
  explicit Init_Fibonacci_GetResult_Event_request(::diff_amr_msgs::action::Fibonacci_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Fibonacci_GetResult_Event_response request(::diff_amr_msgs::action::Fibonacci_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Fibonacci_GetResult_Event_response(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_GetResult_Event msg_;
};

class Init_Fibonacci_GetResult_Event_info
{
public:
  Init_Fibonacci_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Event_request info(::diff_amr_msgs::action::Fibonacci_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Fibonacci_GetResult_Event_request(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_GetResult_Event>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_GetResult_Event_info();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace action
{

namespace builder
{

class Init_Fibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibonacci_FeedbackMessage_feedback(::diff_amr_msgs::action::Fibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::action::Fibonacci_FeedbackMessage feedback(::diff_amr_msgs::action::Fibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_FeedbackMessage msg_;
};

class Init_Fibonacci_FeedbackMessage_goal_id
{
public:
  Init_Fibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_FeedbackMessage_feedback goal_id(::diff_amr_msgs::action::Fibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::diff_amr_msgs::action::Fibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::action::Fibonacci_FeedbackMessage>()
{
  return diff_amr_msgs::action::builder::Init_Fibonacci_FeedbackMessage_goal_id();
}

}  // namespace diff_amr_msgs

#endif  // DIFF_AMR_MSGS__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
