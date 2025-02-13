// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from transportation_hub:msg/OverallInfo.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__STRUCT_HPP_
#define TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'road_info'
#include "transportation_hub/msg/detail/road_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__transportation_hub__msg__OverallInfo __attribute__((deprecated))
#else
# define DEPRECATED__transportation_hub__msg__OverallInfo __declspec(deprecated)
#endif

namespace transportation_hub
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OverallInfo_
{
  using Type = OverallInfo_<ContainerAllocator>;

  explicit OverallInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_cities = 0l;
      this->number_of_roads = 0l;
      this->src_city = 0l;
      this->des_city = 0l;
    }
  }

  explicit OverallInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_cities = 0l;
      this->number_of_roads = 0l;
      this->src_city = 0l;
      this->des_city = 0l;
    }
  }

  // field types and members
  using _number_of_cities_type =
    int32_t;
  _number_of_cities_type number_of_cities;
  using _number_of_roads_type =
    int32_t;
  _number_of_roads_type number_of_roads;
  using _road_info_type =
    std::vector<transportation_hub::msg::RoadInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<transportation_hub::msg::RoadInfo_<ContainerAllocator>>>;
  _road_info_type road_info;
  using _src_city_type =
    int32_t;
  _src_city_type src_city;
  using _des_city_type =
    int32_t;
  _des_city_type des_city;

  // setters for named parameter idiom
  Type & set__number_of_cities(
    const int32_t & _arg)
  {
    this->number_of_cities = _arg;
    return *this;
  }
  Type & set__number_of_roads(
    const int32_t & _arg)
  {
    this->number_of_roads = _arg;
    return *this;
  }
  Type & set__road_info(
    const std::vector<transportation_hub::msg::RoadInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<transportation_hub::msg::RoadInfo_<ContainerAllocator>>> & _arg)
  {
    this->road_info = _arg;
    return *this;
  }
  Type & set__src_city(
    const int32_t & _arg)
  {
    this->src_city = _arg;
    return *this;
  }
  Type & set__des_city(
    const int32_t & _arg)
  {
    this->des_city = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    transportation_hub::msg::OverallInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const transportation_hub::msg::OverallInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      transportation_hub::msg::OverallInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      transportation_hub::msg::OverallInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__transportation_hub__msg__OverallInfo
    std::shared_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__transportation_hub__msg__OverallInfo
    std::shared_ptr<transportation_hub::msg::OverallInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverallInfo_ & other) const
  {
    if (this->number_of_cities != other.number_of_cities) {
      return false;
    }
    if (this->number_of_roads != other.number_of_roads) {
      return false;
    }
    if (this->road_info != other.road_info) {
      return false;
    }
    if (this->src_city != other.src_city) {
      return false;
    }
    if (this->des_city != other.des_city) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverallInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverallInfo_

// alias to use template instance with default allocator
using OverallInfo =
  transportation_hub::msg::OverallInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace transportation_hub

#endif  // TRANSPORTATION_HUB__MSG__DETAIL__OVERALL_INFO__STRUCT_HPP_
