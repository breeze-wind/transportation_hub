// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/road_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_RoadInfo_length
{
public:
  explicit Init_RoadInfo_length(::interfaces::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::RoadInfo length(::interfaces::msg::RoadInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::RoadInfo msg_;
};

class Init_RoadInfo_destination
{
public:
  explicit Init_RoadInfo_destination(::interfaces::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  Init_RoadInfo_length destination(::interfaces::msg::RoadInfo::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_RoadInfo_length(msg_);
  }

private:
  ::interfaces::msg::RoadInfo msg_;
};

class Init_RoadInfo_source
{
public:
  Init_RoadInfo_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadInfo_destination source(::interfaces::msg::RoadInfo::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_RoadInfo_destination(msg_);
  }

private:
  ::interfaces::msg::RoadInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::RoadInfo>()
{
  return interfaces::msg::builder::Init_RoadInfo_source();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
