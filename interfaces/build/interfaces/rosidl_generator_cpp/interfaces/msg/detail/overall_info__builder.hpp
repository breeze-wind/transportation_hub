// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/OverallInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__OVERALL_INFO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__OVERALL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/overall_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_OverallInfo_des_city
{
public:
  explicit Init_OverallInfo_des_city(::interfaces::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::OverallInfo des_city(::interfaces::msg::OverallInfo::_des_city_type arg)
  {
    msg_.des_city = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::OverallInfo msg_;
};

class Init_OverallInfo_src_city
{
public:
  explicit Init_OverallInfo_src_city(::interfaces::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  Init_OverallInfo_des_city src_city(::interfaces::msg::OverallInfo::_src_city_type arg)
  {
    msg_.src_city = std::move(arg);
    return Init_OverallInfo_des_city(msg_);
  }

private:
  ::interfaces::msg::OverallInfo msg_;
};

class Init_OverallInfo_road_info
{
public:
  explicit Init_OverallInfo_road_info(::interfaces::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  Init_OverallInfo_src_city road_info(::interfaces::msg::OverallInfo::_road_info_type arg)
  {
    msg_.road_info = std::move(arg);
    return Init_OverallInfo_src_city(msg_);
  }

private:
  ::interfaces::msg::OverallInfo msg_;
};

class Init_OverallInfo_number_of_roads
{
public:
  explicit Init_OverallInfo_number_of_roads(::interfaces::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  Init_OverallInfo_road_info number_of_roads(::interfaces::msg::OverallInfo::_number_of_roads_type arg)
  {
    msg_.number_of_roads = std::move(arg);
    return Init_OverallInfo_road_info(msg_);
  }

private:
  ::interfaces::msg::OverallInfo msg_;
};

class Init_OverallInfo_number_of_cities
{
public:
  Init_OverallInfo_number_of_cities()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverallInfo_number_of_roads number_of_cities(::interfaces::msg::OverallInfo::_number_of_cities_type arg)
  {
    msg_.number_of_cities = std::move(arg);
    return Init_OverallInfo_number_of_roads(msg_);
  }

private:
  ::interfaces::msg::OverallInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::OverallInfo>()
{
  return interfaces::msg::builder::Init_OverallInfo_number_of_cities();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__OVERALL_INFO__BUILDER_HPP_
