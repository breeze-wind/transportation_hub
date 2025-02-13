// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from transportation_hub:srv/Judge.idl
// generated code does not contain a copyright notice

#ifndef TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__STRUCT_HPP_
#define TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__transportation_hub__srv__Judge_Request __attribute__((deprecated))
#else
# define DEPRECATED__transportation_hub__srv__Judge_Request __declspec(deprecated)
#endif

namespace transportation_hub
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Judge_Request_
{
  using Type = Judge_Request_<ContainerAllocator>;

  explicit Judge_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Judge_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _path_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    transportation_hub::srv::Judge_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const transportation_hub::srv::Judge_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      transportation_hub::srv::Judge_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      transportation_hub::srv::Judge_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__transportation_hub__srv__Judge_Request
    std::shared_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__transportation_hub__srv__Judge_Request
    std::shared_ptr<transportation_hub::srv::Judge_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Judge_Request_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Judge_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Judge_Request_

// alias to use template instance with default allocator
using Judge_Request =
  transportation_hub::srv::Judge_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace transportation_hub


#ifndef _WIN32
# define DEPRECATED__transportation_hub__srv__Judge_Response __attribute__((deprecated))
#else
# define DEPRECATED__transportation_hub__srv__Judge_Response __declspec(deprecated)
#endif

namespace transportation_hub
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Judge_Response_
{
  using Type = Judge_Response_<ContainerAllocator>;

  explicit Judge_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Judge_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    transportation_hub::srv::Judge_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const transportation_hub::srv::Judge_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      transportation_hub::srv::Judge_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      transportation_hub::srv::Judge_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__transportation_hub__srv__Judge_Response
    std::shared_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__transportation_hub__srv__Judge_Response
    std::shared_ptr<transportation_hub::srv::Judge_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Judge_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Judge_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Judge_Response_

// alias to use template instance with default allocator
using Judge_Response =
  transportation_hub::srv::Judge_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace transportation_hub

namespace transportation_hub
{

namespace srv
{

struct Judge
{
  using Request = transportation_hub::srv::Judge_Request;
  using Response = transportation_hub::srv::Judge_Response;
};

}  // namespace srv

}  // namespace transportation_hub

#endif  // TRANSPORTATION_HUB__SRV__DETAIL__JUDGE__STRUCT_HPP_
