// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from transportation_hub:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
#define TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "transportation_hub/msg/detail/road_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace transportation_hub
{

namespace msg
{

namespace builder
{

class Init_RoadInfo_length
{
public:
  explicit Init_RoadInfo_length(::transportation_hub::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  ::transportation_hub::msg::RoadInfo length(::transportation_hub::msg::RoadInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::transportation_hub::msg::RoadInfo msg_;
};

class Init_RoadInfo_destination
{
public:
  explicit Init_RoadInfo_destination(::transportation_hub::msg::RoadInfo & msg)
  : msg_(msg)
  {}
  Init_RoadInfo_length destination(::transportation_hub::msg::RoadInfo::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_RoadInfo_length(msg_);
  }

private:
  ::transportation_hub::msg::RoadInfo msg_;
};

class Init_RoadInfo_source
{
public:
  Init_RoadInfo_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadInfo_destination source(::transportation_hub::msg::RoadInfo::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_RoadInfo_destination(msg_);
  }

private:
  ::transportation_hub::msg::RoadInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::transportation_hub::msg::RoadInfo>()
{
  return transportation_hub::msg::builder::Init_RoadInfo_source();
}

}  // namespace transportation_hub

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__BUILDER_HPP_
