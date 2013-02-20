/* Auto-generated by genmsg_cpp for file /home/peter/fuerte_workspace/packages/ptu/ptu_control/msg/PtuResetFeedback.msg */
#ifndef PTU_CONTROL_MESSAGE_PTURESETFEEDBACK_H
#define PTU_CONTROL_MESSAGE_PTURESETFEEDBACK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace ptu_control
{
template <class ContainerAllocator>
struct PtuResetFeedback_ {
  typedef PtuResetFeedback_<ContainerAllocator> Type;

  PtuResetFeedback_()
  {
  }

  PtuResetFeedback_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::ptu_control::PtuResetFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ptu_control::PtuResetFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PtuResetFeedback
typedef  ::ptu_control::PtuResetFeedback_<std::allocator<void> > PtuResetFeedback;

typedef boost::shared_ptr< ::ptu_control::PtuResetFeedback> PtuResetFeedbackPtr;
typedef boost::shared_ptr< ::ptu_control::PtuResetFeedback const> PtuResetFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ptu_control::PtuResetFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ptu_control::PtuResetFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ptu_control

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ptu_control::PtuResetFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ptu_control::PtuResetFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ptu_control::PtuResetFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::ptu_control::PtuResetFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ptu_control::PtuResetFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ptu_control/PtuResetFeedback";
  }

  static const char* value(const  ::ptu_control::PtuResetFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ptu_control::PtuResetFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# feedback\n\
\n\
";
  }

  static const char* value(const  ::ptu_control::PtuResetFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ptu_control::PtuResetFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ptu_control::PtuResetFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PtuResetFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ptu_control::PtuResetFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ptu_control::PtuResetFeedback_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // PTU_CONTROL_MESSAGE_PTURESETFEEDBACK_H

