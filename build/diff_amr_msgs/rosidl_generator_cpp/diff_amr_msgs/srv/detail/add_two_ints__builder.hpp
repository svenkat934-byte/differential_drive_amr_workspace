// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from diff_amr_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "diff_amr_msgs/srv/add_two_ints.hpp"


#ifndef DIFF_AMR_MSGS__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define DIFF_AMR_MSGS__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "diff_amr_msgs/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace diff_amr_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::diff_amr_msgs::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::srv::AddTwoInts_Request b(::diff_amr_msgs::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::diff_amr_msgs::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::diff_amr_msgs::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::srv::AddTwoInts_Request>()
{
  return diff_amr_msgs::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::diff_amr_msgs::srv::AddTwoInts_Response sum(::diff_amr_msgs::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::srv::AddTwoInts_Response>()
{
  return diff_amr_msgs::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace diff_amr_msgs


namespace diff_amr_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Event_response
{
public:
  explicit Init_AddTwoInts_Event_response(::diff_amr_msgs::srv::AddTwoInts_Event & msg)
  : msg_(msg)
  {}
  ::diff_amr_msgs::srv::AddTwoInts_Event response(::diff_amr_msgs::srv::AddTwoInts_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::diff_amr_msgs::srv::AddTwoInts_Event msg_;
};

class Init_AddTwoInts_Event_request
{
public:
  explicit Init_AddTwoInts_Event_request(::diff_amr_msgs::srv::AddTwoInts_Event & msg)
  : msg_(msg)
  {}
  Init_AddTwoInts_Event_response request(::diff_amr_msgs::srv::AddTwoInts_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddTwoInts_Event_response(msg_);
  }

private:
  ::diff_amr_msgs::srv::AddTwoInts_Event msg_;
};

class Init_AddTwoInts_Event_info
{
public:
  Init_AddTwoInts_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Event_request info(::diff_amr_msgs::srv::AddTwoInts_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddTwoInts_Event_request(msg_);
  }

private:
  ::diff_amr_msgs::srv::AddTwoInts_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::diff_amr_msgs::srv::AddTwoInts_Event>()
{
  return diff_amr_msgs::srv::builder::Init_AddTwoInts_Event_info();
}

}  // namespace diff_amr_msgs

#endif  // DIFF_AMR_MSGS__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
