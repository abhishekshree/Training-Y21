cmake_minimum_required(VERSION 3.0.2)
project(math)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_filters
)

## System dependencies are found with CMake's conventions
find_package(catkin REQUIRED COMPONENTS 
roscpp 
rospy 
std_msgs
message_filters
message_generation 
genmsg)

## Generate messages in the 'msg' folder
add_message_files(
  FILES
  number.msg
)

## Generate services in the 'srv' folder
add_service_files(
  FILES
  add_two_numbers.srv
)

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
  # message_filters
)

catkin_package(
 INCLUDE_DIRS include
 LIBRARIES math
 CATKIN_DEPENDS roscpp rospy std_msgs message_filters message_runtime
 DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(input_node src/input_node.cpp)
target_link_libraries(input_node ${catkin_LIBRARIES})
add_dependencies(input_node math_generate_messages_cpp)
add_dependencies(input_node math_gencpp)


add_executable(output_node src/output_node.cpp)
target_link_libraries(output_node ${catkin_LIBRARIES})
add_dependencies(output_node math_generate_messages_cpp)

add_executable(add_two_numbers_server src/add_two_numbers_server.cpp)
target_link_libraries(add_two_numbers_server ${catkin_LIBRARIES})
add_dependencies(add_two_numbers_server math_gencpp)