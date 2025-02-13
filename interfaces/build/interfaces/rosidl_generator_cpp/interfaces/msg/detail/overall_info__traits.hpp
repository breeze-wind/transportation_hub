// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/OverallInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__OVERALL_INFO__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__OVERALL_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/overall_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'road_info'
#include "interfaces/msg/detail/road_info__traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const OverallInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: number_of_cities
  {
    out << "number_of_cities: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_cities, out);
    out << ", ";
  }

  // member: number_of_roads
  {
    out << "number_of_roads: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_roads, out);
    out << ", ";
  }

  // member: road_info
  {
    if (msg.road_info.size() == 0) {
      out << "road_info: []";
    } else {
      out << "road_info: [";
      size_t pending_items = msg.road_info.size();
      for (auto item : msg.road_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: src_city
  {
    out << "src_city: ";
    rosidl_generator_traits::value_to_yaml(msg.src_city, out);
    out << ", ";
  }

  // member: des_city
  {
    out << "des_city: ";
    rosidl_generator_traits::value_to_yaml(msg.des_city, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OverallInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number_of_cities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_cities: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_cities, out);
    out << "\n";
  }

  // member: number_of_roads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_roads: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_roads, out);
    out << "\n";
  }

  // member: road_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.road_info.size() == 0) {
      out << "road_info: []\n";
    } else {
      out << "road_info:\n";
      for (auto item : msg.road_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: src_city
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "src_city: ";
    rosidl_generator_traits::value_to_yaml(msg.src_city, out);
    out << "\n";
  }

  // member: des_city
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "des_city: ";
    rosidl_generator_traits::value_to_yaml(msg.des_city, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OverallInfo & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::OverallInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::OverallInfo & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::OverallInfo>()
{
  return "interfaces::msg::OverallInfo";
}

template<>
inline const char * name<interfaces::msg::OverallInfo>()
{
  return "interfaces/msg/OverallInfo";
}

template<>
struct has_fixed_size<interfaces::msg::OverallInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::OverallInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::OverallInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__OVERALL_INFO__TRAITS_HPP_
