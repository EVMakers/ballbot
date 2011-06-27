/* Auto-generated by genmsg_cpp for file /home/ankush/ros_tutorials/odom_xytheta/msg/odom_data.msg */
#ifndef ODOM_XYTHETA_MESSAGE_ODOM_DATA_H
#define ODOM_XYTHETA_MESSAGE_ODOM_DATA_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace odom_xytheta
{
template <class ContainerAllocator>
struct odom_data_ : public ros::Message
{
  typedef odom_data_<ContainerAllocator> Type;

  odom_data_()
  : x(0.0)
  , y(0.0)
  , angle(0)
  {
  }

  odom_data_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , angle(0)
  {
  }

  typedef float _x_type;
  float x;

  typedef float _y_type;
  float y;

  typedef int16_t _angle_type;
  int16_t angle;


private:
  static const char* __s_getDataType_() { return "odom_xytheta/odom_data"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "74648301fd514bb2e89c9793dd81e57b"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "float32 x\n\
float32 y\n\
int16 angle\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, x);
    ros::serialization::serialize(stream, y);
    ros::serialization::serialize(stream, angle);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, x);
    ros::serialization::deserialize(stream, y);
    ros::serialization::deserialize(stream, angle);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(x);
    size += ros::serialization::serializationLength(y);
    size += ros::serialization::serializationLength(angle);
    return size;
  }

  typedef boost::shared_ptr< ::odom_xytheta::odom_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::odom_xytheta::odom_data_<ContainerAllocator>  const> ConstPtr;
}; // struct odom_data
typedef  ::odom_xytheta::odom_data_<std::allocator<void> > odom_data;

typedef boost::shared_ptr< ::odom_xytheta::odom_data> odom_dataPtr;
typedef boost::shared_ptr< ::odom_xytheta::odom_data const> odom_dataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::odom_xytheta::odom_data_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::odom_xytheta::odom_data_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace odom_xytheta

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::odom_xytheta::odom_data_<ContainerAllocator> > {
  static const char* value() 
  {
    return "74648301fd514bb2e89c9793dd81e57b";
  }

  static const char* value(const  ::odom_xytheta::odom_data_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x74648301fd514bb2ULL;
  static const uint64_t static_value2 = 0xe89c9793dd81e57bULL;
};

template<class ContainerAllocator>
struct DataType< ::odom_xytheta::odom_data_<ContainerAllocator> > {
  static const char* value() 
  {
    return "odom_xytheta/odom_data";
  }

  static const char* value(const  ::odom_xytheta::odom_data_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::odom_xytheta::odom_data_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 x\n\
float32 y\n\
int16 angle\n\
";
  }

  static const char* value(const  ::odom_xytheta::odom_data_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::odom_xytheta::odom_data_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::odom_xytheta::odom_data_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.angle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct odom_data_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::odom_xytheta::odom_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::odom_xytheta::odom_data_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.angle);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ODOM_XYTHETA_MESSAGE_ODOM_DATA_H
