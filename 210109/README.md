1. Created a new workspace- "catkin_ws" in the ros environment.
2. Used the 'create_ros_pkg' command to create a package named "math" in the src folder of the workspace.
3. Build the package using the 'catkin_make' command.
4. We can now see the build, devel and src folders within the directory.
5. Used 'roscore' and opened up a new terminal to use it.
6. Tried the turtlesim node to understand different functions of rqt, nodes, topics, etc.
7. Created a node 'input_node' in the src directory and build the node.
8. Created a service(srv) to add two ints by copying it from the rospy_tutorials.
9. Created a message(msg) to add an int which is to be published by the node.
10. Build the node and service using the catkin_make command.
11. Created the output node.
12. Made the add_two_ints_server.cpp and the add_two_ints_client.cpp files with the appropriate codes.
13. Made the necessary changes in the .xml and the CMakeText files.
14. Finally, Build the program using catkin_make and tested.