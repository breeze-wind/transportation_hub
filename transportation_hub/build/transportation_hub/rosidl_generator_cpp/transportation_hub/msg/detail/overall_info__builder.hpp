// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from transportation_hub:msg/OverallInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__BUILDER_HPP_
#define TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "transportation_hub/msg/detail/overall_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace transportation_hub
{

namespace msg
{

namespace builder
{

class Init_OverallInfo_des_city
{
public:
  explicit Init_OverallInfo_des_city(::transportation_hub::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  ::transportation_hub::msg::OverallInfo des_city(::transportation_hub::msg::OverallInfo::_des_city_type arg)
  {
    msg_.des_city = std::move(arg);
    return std::move(msg_);
  }

private:
  ::transportation_hub::msg::OverallInfo msg_;
};

class Init_OverallInfo_src_city
{
public:
  explicit Init_OverallInfo_src_city(::transportation_hub::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  Init_OverallInfo_des_city src_city(::transportation_hub::msg::OverallInfo::_src_city_type arg)
  {
    msg_.src_city = std::move(arg);
    return Init_OverallInfo_des_city(msg_);
  }

private:
  ::transportation_hub::msg::OverallInfo msg_;
};

class Init_OverallInfo_road_info
{
public:
  explicit Init_OverallInfo_road_info(::transportation_hub::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  Init_OverallInfo_src_city road_info(::transportation_hub::msg::OverallInfo::_road_info_type arg)
  {
    msg_.road_info = std::move(arg);
    return Init_OverallInfo_src_city(msg_);
  }

private:
  ::transportation_hub::msg::OverallInfo msg_;
};

class Init_OverallInfo_number_of_roads
{
public:
  explicit Init_OverallInfo_number_of_roads(::transportation_hub::msg::OverallInfo & msg)
  : msg_(msg)
  {}
  Init_OverallInfo_road_info number_of_roads(::transportation_hub::msg::OverallInfo::_number_of_roads_type arg)
  {
    msg_.number_of_roads = std::move(arg);
    return Init_OverallInfo_road_info(msg_);
  }

private:
  ::transportation_hub::msg::OverallInfo msg_;
};

class Init_OverallInfo_number_of_cities
{
public:
  Init_OverallInfo_number_of_cities()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OverallInfo_number_of_roads number_of_cities(::transportation_hub::msg::OverallInfo::_number_of_cities_type arg)
  {
    msg_.number_of_cities = std::move(arg);
    return Init_OverallInfo_number_of_roads(msg_);
  }

private:
  ::transportation_hub::msg::OverallInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::transportation_hub::msg::OverallInfo>()
{
  return transportation_hub::msg::builder::Init_OverallInfo_number_of_cities();
}

}  // namespace transportation_hub

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__BUILDER_HPP_
