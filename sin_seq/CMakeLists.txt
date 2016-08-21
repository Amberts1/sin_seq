cmake_minimum_required(VERSION 2.8.3)
project(sin_seq)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)

## Declare ROS messages and services
#add_message_files(FILES Num.msg)
#add_service_files(FILES AddTwoInts.srv)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

## Build publisher and subscriber
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(sin_seq_pub src/sin_seq_pub.cpp)
target_link_libraries(sin_seq_pub ${catkin_LIBRARIES})
add_dependencies(sin_seq_pub sin_seq_generate_messages_cpp)

add_executable(sin_seq_sub src/sin_seq_sub.cpp)
target_link_libraries(sin_seq_sub ${catkin_LIBRARIES})
add_dependencies(sin_seq_sub sin_seq_generate_messages_cpp)

