// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from transportation_hub:srv/Judge.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__BUILDER_HPP_
#define TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "transportation_hub/srv/detail/judge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace transportation_hub
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
  ::transportation_hub::srv::Judge_Request path(::transportation_hub::srv::Judge_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::transportation_hub::srv::Judge_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::transportation_hub::srv::Judge_Request>()
{
  return transportation_hub::srv::builder::Init_Judge_Request_path();
}

}  // namespace transportation_hub


namespace transportation_hub
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::transportation_hub::srv::Judge_Response>()
{
  return ::transportation_hub::srv::Judge_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace transportation_hub

#endif  // TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__BUILDER_HPP_
