// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from transportation_hub:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__TRAITS_HPP_
#define TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "transportation_hub/msg/detail/road_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace transportation_hub
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: destination
  {
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoadInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoadInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace transportation_hub

namespace rosidl_generator_traits
{

[[deprecated("use transportation_hub::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const transportation_hub::msg::RoadInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  transportation_hub::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use transportation_hub::msg::to_yaml() instead")]]
inline std::string to_yaml(const transportation_hub::msg::RoadInfo & msg)
{
  return transportation_hub::msg::to_yaml(msg);
}

template<>
inline const char * data_type<transportation_hub::msg::RoadInfo>()
{
  return "transportation_hub::msg::RoadInfo";
}

template<>
inline const char * name<transportation_hub::msg::RoadInfo>()
{
  return "transportation_hub/msg/RoadInfo";
}

template<>
struct has_fixed_size<transportation_hub::msg::RoadInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<transportation_hub::msg::RoadInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<transportation_hub::msg::RoadInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__ROAD_INFO__TRAITS_HPP_
