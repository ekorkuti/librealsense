// Generated by gencpp from file std_msgs/Int64.msg
// DO NOT EDIT!


#ifndef STD_MSGS_MESSAGE_INT64_H
#define STD_MSGS_MESSAGE_INT64_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace std_msgs
{
template <class ContainerAllocator>
struct Int64_
{
  typedef Int64_<ContainerAllocator> Type;

  Int64_()
    : data(0)  {
    }
  Int64_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef int64_t _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::std_msgs::Int64_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::std_msgs::Int64_<ContainerAllocator> const> ConstPtr;

}; // struct Int64_

typedef ::std_msgs::Int64_<std::allocator<void> > Int64;

typedef boost::shared_ptr< ::std_msgs::Int64 > Int64Ptr;
typedef boost::shared_ptr< ::std_msgs::Int64 const> Int64ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::std_msgs::Int64_<ContainerAllocator> & v)
{
rs2rosinternal::message_operations::Printer< ::std_msgs::Int64_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace std_msgs

namespace rs2rosinternal
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/tmp/binarydeb/ros-kinetic-std-msgs-0.5.10/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::std_msgs::Int64_<ContainerAllocator> >
  : std::true_type
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::std_msgs::Int64_<ContainerAllocator> const>
  : std::true_type
  { };

template <class ContainerAllocator>
struct IsMessage< ::std_msgs::Int64_<ContainerAllocator> >
  : std::true_type
  { };

template <class ContainerAllocator>
struct IsMessage< ::std_msgs::Int64_<ContainerAllocator> const>
  : std::true_type
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_msgs::Int64_<ContainerAllocator> >
  : std::false_type
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_msgs::Int64_<ContainerAllocator> const>
  : std::false_type
  { };


template<class ContainerAllocator>
struct MD5Sum< ::std_msgs::Int64_<ContainerAllocator> >
{
  static const char* value()
  {
    return "34add168574510e6e17f5d23ecc077ef";
  }

  static const char* value(const ::std_msgs::Int64_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x34add168574510e6ULL;
  static const uint64_t static_value2 = 0xe17f5d23ecc077efULL;
};

template<class ContainerAllocator>
struct DataType< ::std_msgs::Int64_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Int64";
  }

  static const char* value(const ::std_msgs::Int64_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::std_msgs::Int64_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 data\n\
";
  }

  static const char* value(const ::std_msgs::Int64_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace rs2rosinternal

namespace rs2rosinternal
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::std_msgs::Int64_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Int64_

} // namespace serialization
} // namespace rs2rosinternal

namespace rs2rosinternal
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::std_msgs::Int64_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::std_msgs::Int64_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<int64_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace rs2rosinternal

#endif // STD_MSGS_MESSAGE_INT64_H
