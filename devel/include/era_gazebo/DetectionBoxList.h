// Generated by gencpp from file era_gazebo/DetectionBoxList.msg
// DO NOT EDIT!


#ifndef ERA_GAZEBO_MESSAGE_DETECTIONBOXLIST_H
#define ERA_GAZEBO_MESSAGE_DETECTIONBOXLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <era_gazebo/DetectionBox.h>

namespace era_gazebo
{
template <class ContainerAllocator>
struct DetectionBoxList_
{
  typedef DetectionBoxList_<ContainerAllocator> Type;

  DetectionBoxList_()
    : header()
    , detection_list()  {
    }
  DetectionBoxList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detection_list(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::era_gazebo::DetectionBox_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::era_gazebo::DetectionBox_<ContainerAllocator> >::other >  _detection_list_type;
  _detection_list_type detection_list;





  typedef boost::shared_ptr< ::era_gazebo::DetectionBoxList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::era_gazebo::DetectionBoxList_<ContainerAllocator> const> ConstPtr;

}; // struct DetectionBoxList_

typedef ::era_gazebo::DetectionBoxList_<std::allocator<void> > DetectionBoxList;

typedef boost::shared_ptr< ::era_gazebo::DetectionBoxList > DetectionBoxListPtr;
typedef boost::shared_ptr< ::era_gazebo::DetectionBoxList const> DetectionBoxListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::era_gazebo::DetectionBoxList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::era_gazebo::DetectionBoxList_<ContainerAllocator1> & lhs, const ::era_gazebo::DetectionBoxList_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detection_list == rhs.detection_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::era_gazebo::DetectionBoxList_<ContainerAllocator1> & lhs, const ::era_gazebo::DetectionBoxList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace era_gazebo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::era_gazebo::DetectionBoxList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::era_gazebo::DetectionBoxList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::era_gazebo::DetectionBoxList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7caafab23e9902293afd0ef03657c9d";
  }

  static const char* value(const ::era_gazebo::DetectionBoxList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7caafab23e99022ULL;
  static const uint64_t static_value2 = 0x93afd0ef03657c9dULL;
};

template<class ContainerAllocator>
struct DataType< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "era_gazebo/DetectionBoxList";
  }

  static const char* value(const ::era_gazebo::DetectionBoxList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"DetectionBox[] detection_list\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: era_gazebo/DetectionBox\n"
"Header header\n"
"\n"
"string type\n"
"uint16 id\n"
"uint32 left\n"
"uint32 right\n"
"uint32 top\n"
"uint32 bottom\n"
"float32[] mask_1d\n"
;
  }

  static const char* value(const ::era_gazebo::DetectionBoxList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detection_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectionBoxList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::era_gazebo::DetectionBoxList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::era_gazebo::DetectionBoxList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detection_list[]" << std::endl;
    for (size_t i = 0; i < v.detection_list.size(); ++i)
    {
      s << indent << "  detection_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::era_gazebo::DetectionBox_<ContainerAllocator> >::stream(s, indent + "    ", v.detection_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ERA_GAZEBO_MESSAGE_DETECTIONBOXLIST_H
