// Generated by gencpp from file rtabmap_ros/LoadDatabaseRequest.msg
// DO NOT EDIT!


#ifndef RTABMAP_ROS_MESSAGE_LOADDATABASEREQUEST_H
#define RTABMAP_ROS_MESSAGE_LOADDATABASEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rtabmap_ros
{
template <class ContainerAllocator>
struct LoadDatabaseRequest_
{
  typedef LoadDatabaseRequest_<ContainerAllocator> Type;

  LoadDatabaseRequest_()
    : database_path()
    , clear(false)  {
    }
  LoadDatabaseRequest_(const ContainerAllocator& _alloc)
    : database_path(_alloc)
    , clear(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _database_path_type;
  _database_path_type database_path;

   typedef uint8_t _clear_type;
  _clear_type clear;





  typedef boost::shared_ptr< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LoadDatabaseRequest_

typedef ::rtabmap_ros::LoadDatabaseRequest_<std::allocator<void> > LoadDatabaseRequest;

typedef boost::shared_ptr< ::rtabmap_ros::LoadDatabaseRequest > LoadDatabaseRequestPtr;
typedef boost::shared_ptr< ::rtabmap_ros::LoadDatabaseRequest const> LoadDatabaseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator1> & lhs, const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator2> & rhs)
{
  return lhs.database_path == rhs.database_path &&
    lhs.clear == rhs.clear;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator1> & lhs, const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rtabmap_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "686abf12c0ee22118c7e5fcc29bcdabe";
  }

  static const char* value(const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x686abf12c0ee2211ULL;
  static const uint64_t static_value2 = 0x8c7e5fcc29bcdabeULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_ros/LoadDatabaseRequest";
  }

  static const char* value(const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#request\n"
"\n"
"# Local database path on which rtabmap is running.\n"
"# If the path doesn't exist, a new database will be created.\n"
"string database_path\n"
"\n"
"# If the database already exists, data will be cleared if true.\n"
"bool clear\n"
"\n"
;
  }

  static const char* value(const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.database_path);
      stream.next(m.clear);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LoadDatabaseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rtabmap_ros::LoadDatabaseRequest_<ContainerAllocator>& v)
  {
    s << indent << "database_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.database_path);
    s << indent << "clear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_ROS_MESSAGE_LOADDATABASEREQUEST_H
