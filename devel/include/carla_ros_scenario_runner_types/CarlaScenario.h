// Generated by gencpp from file carla_ros_scenario_runner_types/CarlaScenario.msg
// DO NOT EDIT!


#ifndef CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIO_H
#define CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace carla_ros_scenario_runner_types
{
template <class ContainerAllocator>
struct CarlaScenario_
{
  typedef CarlaScenario_<ContainerAllocator> Type;

  CarlaScenario_()
    : name()
    , scenario_file()
    , waypoints()
    , target_speed(0.0)  {
    }
  CarlaScenario_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , scenario_file(_alloc)
    , waypoints(_alloc)
    , target_speed(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _scenario_file_type;
  _scenario_file_type scenario_file;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;

   typedef double _target_speed_type;
  _target_speed_type target_speed;





  typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const> ConstPtr;

}; // struct CarlaScenario_

typedef ::carla_ros_scenario_runner_types::CarlaScenario_<std::allocator<void> > CarlaScenario;

typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario > CarlaScenarioPtr;
typedef boost::shared_ptr< ::carla_ros_scenario_runner_types::CarlaScenario const> CarlaScenarioConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator1> & lhs, const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.scenario_file == rhs.scenario_file &&
    lhs.waypoints == rhs.waypoints &&
    lhs.target_speed == rhs.target_speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator1> & lhs, const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace carla_ros_scenario_runner_types

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f5f6ec6445da857a4104dc166cc6cc20";
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf5f6ec6445da857aULL;
  static const uint64_t static_value2 = 0x4104dc166cc6cc20ULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_ros_scenario_runner_types/CarlaScenario";
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# Copyright (c) 2020 Intel Corporation.\n"
"#\n"
"# This work is licensed under the terms of the MIT license.\n"
"# For a copy, see <https://opensource.org/licenses/MIT>.\n"
"#\n"
"string name\n"
"string scenario_file\n"
"geometry_msgs/Pose[] waypoints\n"
"float64 target_speed\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.scenario_file);
      stream.next(m.waypoints);
      stream.next(m.target_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarlaScenario_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_ros_scenario_runner_types::CarlaScenario_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "scenario_file: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.scenario_file);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
    s << indent << "target_speed: ";
    Printer<double>::stream(s, indent + "  ", v.target_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_ROS_SCENARIO_RUNNER_TYPES_MESSAGE_CARLASCENARIO_H
