# %Tag(FULLTEXT)%
cmake_minimum_required(VERSION 3.0.2)
project(math)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)

## Declare ROS messages and services
add_message_files(FILES Num.msg)
add_service_files(FILES AddTwoInts.srv)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(input_node src/input_node.cpp)
target_link_libraries(input_node ${catkin_LIBRARIES})
add_dependencies(input_node math_generate_messages_cpp)

add_executable(output_node src/output_node.cpp)
target_link_libraries(output_node ${catkin_LIBRARIES})
add_dependencies(output_node math_generate_messages_cpp)

# %EndTag(FULLTEXT)%

#after client server
add_executable(add_two_ints_server src/add_two_ints_server.cpp)
target_link_libraries(add_two_ints_server ${catkin_LIBRARIES})
add_dependencies(add_two_ints_server math_gencpp)

add_executable(add_two_ints_client src/add_two_ints_client.cpp)
target_link_libraries(add_two_ints_client ${catkin_LIBRARIES})
add_dependencies(add_two_ints_client math_gencpp)