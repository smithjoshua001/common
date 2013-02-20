/* Auto-generated by genmsg_cpp for file /home/peter/fuerte_workspace/packages/ptu/ptu_control/msg/PtuResetActionGoal.msg */
#ifndef PTU_CONTROL_MESSAGE_PTURESETACTIONGOAL_H
#define PTU_CONTROL_MESSAGE_PTURESETACTIONGOAL_H
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

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "ptu_control/PtuResetGoal.h"

namespace ptu_control
{
template <class ContainerAllocator>
struct PtuResetActionGoal_ {
  typedef PtuResetActionGoal_<ContainerAllocator> Type;

  PtuResetActionGoal_()
  : header()
  , goal_id()
  , goal()
  {
  }

  PtuResetActionGoal_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , goal_id(_alloc)
  , goal(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
   ::actionlib_msgs::GoalID_<ContainerAllocator>  goal_id;

  typedef  ::ptu_control::PtuResetGoal_<ContainerAllocator>  _goal_type;
   ::ptu_control::PtuResetGoal_<ContainerAllocator>  goal;


  typedef boost::shared_ptr< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ptu_control::PtuResetActionGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PtuResetActionGoal
typedef  ::ptu_control::PtuResetActionGoal_<std::allocator<void> > PtuResetActionGoal;

typedef boost::shared_ptr< ::ptu_control::PtuResetActionGoal> PtuResetActionGoalPtr;
typedef boost::shared_ptr< ::ptu_control::PtuResetActionGoal const> PtuResetActionGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ptu_control::PtuResetActionGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ptu_control

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ptu_control::PtuResetActionGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4b30be6cd12b9e72826df56b481f40e0";
  }

  static const char* value(const  ::ptu_control::PtuResetActionGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4b30be6cd12b9e72ULL;
  static const uint64_t static_value2 = 0x826df56b481f40e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ptu_control/PtuResetActionGoal";
  }

  static const char* value(const  ::ptu_control::PtuResetActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
PtuResetGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: ptu_control/PtuResetGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal\n\
\n\
";
  }

  static const char* value(const  ::ptu_control::PtuResetActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ptu_control::PtuResetActionGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.goal_id);
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PtuResetActionGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ptu_control::PtuResetActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ptu_control::PtuResetActionGoal_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
s << std::endl;
    Printer< ::ptu_control::PtuResetGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PTU_CONTROL_MESSAGE_PTURESETACTIONGOAL_H

