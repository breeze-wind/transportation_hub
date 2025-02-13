// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Judge.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__JUDGE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__JUDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/judge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Judge_Request_path
{
public:
  Init_Judge_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Judge_Request path(::interfaces::srv::Judge_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Judge_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Judge_Request>()
{
  return interfaces::srv::builder::Init_Judge_Request_path();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Judge_Response>()
{
  return ::interfaces::srv::Judge_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__JUDGE__BUILDER_HPP_
