cmake_minimum_required(VERSION 3.8)
project(math)

## Finding a catkin as well as any catkin package
find_package(catkin REQUIRED COMPONENTS
roscpp
rospy
std_msgs
message_filters)

catkin_package()
include_directories(${catkin_INCLUDE_DIRS})

add_executable(input_node src/input_node.cpp)
target_link_libraries(input_node ${catkin_LIBRARIES})
add_dependencies(input_node math_generate_messages_cpp)
add_executable(output_node src/output_node.cpp)
target_link_libraries(output_node ${catkin_LIBRARIES})
add_dependencies(output_node math_generate_messages_cpp)

add_executable(add_two_ints_server src/add_two_ints_server.cpp)
target_link_libraries(add_two_ints_server ${catkin_LIBRARIES})
add_dependencies(add_two_ints_server math_gencpp)
add_executable(add_two_ints_client src/add_two_ints_client.cpp)
target_link_libraries(add_two_ints_client ${catkin_LIBRARIES})
add_dependencies(add_two_ints_client math_gencpp) 
