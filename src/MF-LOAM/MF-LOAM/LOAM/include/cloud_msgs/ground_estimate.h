// Generated by gencpp from file cloud_msgs/ground_estimate.msg
// DO NOT EDIT!


#ifndef CLOUD_MSGS_MESSAGE_GROUND_ESTIMATE_H
#define CLOUD_MSGS_MESSAGE_GROUND_ESTIMATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/PointCloud2.h>

namespace cloud_msgs
{
template <class ContainerAllocator>
struct ground_estimate_
{
  typedef ground_estimate_<ContainerAllocator> Type;

  ground_estimate_()
    : header()
    , curr()
    , ground()  {
    }
  ground_estimate_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , curr(_alloc)
    , ground(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _curr_type;
  _curr_type curr;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _ground_type;
  _ground_type ground;





  typedef boost::shared_ptr< ::cloud_msgs::ground_estimate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cloud_msgs::ground_estimate_<ContainerAllocator> const> ConstPtr;

}; // struct ground_estimate_

typedef ::cloud_msgs::ground_estimate_<std::allocator<void> > ground_estimate;

typedef boost::shared_ptr< ::cloud_msgs::ground_estimate > ground_estimatePtr;
typedef boost::shared_ptr< ::cloud_msgs::ground_estimate const> ground_estimateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cloud_msgs::ground_estimate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cloud_msgs::ground_estimate_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cloud_msgs::ground_estimate_<ContainerAllocator1> & lhs, const ::cloud_msgs::ground_estimate_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.curr == rhs.curr &&
    lhs.ground == rhs.ground;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cloud_msgs::ground_estimate_<ContainerAllocator1> & lhs, const ::cloud_msgs::ground_estimate_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cloud_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cloud_msgs::ground_estimate_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cloud_msgs::ground_estimate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cloud_msgs::ground_estimate_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5dd1550f6dc7108b050a8854acb1a65e";
  }

  static const char* value(const ::cloud_msgs::ground_estimate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5dd1550f6dc7108bULL;
  static const uint64_t static_value2 = 0x050a8854acb1a65eULL;
};

template<class ContainerAllocator>
struct DataType< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cloud_msgs/ground_estimate";
  }

  static const char* value(const ::cloud_msgs::ground_estimate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"sensor_msgs/PointCloud2 curr\n"
"sensor_msgs/PointCloud2 ground # estimate\n"
"\n"
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
"MSG: sensor_msgs/PointCloud2\n"
"# This message holds a collection of N-dimensional points, which may\n"
"# contain additional information such as normals, intensity, etc. The\n"
"# point data is stored as a binary blob, its layout described by the\n"
"# contents of the \"fields\" array.\n"
"\n"
"# The point cloud data may be organized 2d (image-like) or 1d\n"
"# (unordered). Point clouds organized as 2d images may be produced by\n"
"# camera depth sensors such as stereo or time-of-flight.\n"
"\n"
"# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n"
"# points).\n"
"Header header\n"
"\n"
"# 2D structure of the point cloud. If the cloud is unordered, height is\n"
"# 1 and width is the length of the point cloud.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# Describes the channels and their layout in the binary data blob.\n"
"PointField[] fields\n"
"\n"
"bool    is_bigendian # Is this data bigendian?\n"
"uint32  point_step   # Length of a point in bytes\n"
"uint32  row_step     # Length of a row in bytes\n"
"uint8[] data         # Actual point data, size is (row_step*height)\n"
"\n"
"bool is_dense        # True if there are no invalid points\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointField\n"
"# This message holds the description of one point entry in the\n"
"# PointCloud2 message format.\n"
"uint8 INT8    = 1\n"
"uint8 UINT8   = 2\n"
"uint8 INT16   = 3\n"
"uint8 UINT16  = 4\n"
"uint8 INT32   = 5\n"
"uint8 UINT32  = 6\n"
"uint8 FLOAT32 = 7\n"
"uint8 FLOAT64 = 8\n"
"\n"
"string name      # Name of field\n"
"uint32 offset    # Offset from start of point struct\n"
"uint8  datatype  # Datatype enumeration, see above\n"
"uint32 count     # How many elements in the field\n"
;
  }

  static const char* value(const ::cloud_msgs::ground_estimate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.curr);
      stream.next(m.ground);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ground_estimate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cloud_msgs::ground_estimate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cloud_msgs::ground_estimate_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "curr: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.curr);
    s << indent << "ground: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.ground);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CLOUD_MSGS_MESSAGE_GROUND_ESTIMATE_H
