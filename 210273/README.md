# ROS

## Assignment 1

1) Created a directory dev_ws and a directory src inside it to create a workspace.

2) Use colcon build to build the workspcace with.

3)inside the src directory created a package with the name math with ros2 pkg create command 

4)in the src of our workspcace we created another similar package called tutorial_interfaces.

5)in tutorial_interfaces created two directories msg and srv and created a .msg file and a .srv file respectively in them. This will be of help when we write the codes for the input,output node and the server. msg basically allows topics to publish int data and .srv file will allow the srver file to accept two ints and return its sum.

6) updated the tutorial_interface dependencies in the CMakeLists.txt and the package.xml files.

7)now in the src of the math package i created three cpp files. publisher_member_function.cpp is the input node and has multiple topics through which it publishes two numbers, subscriber_member_function.cpp is the output node that subscribes to the topics of the input node and also publishes the sum of the two numbers in a fourth node, and the add_two_int_server which basically computes the sum of two numbers recieved from the topics of the input node.

8) update the dependecies of the math package so it can use files from the package tutorial_interfaces.

9)go back to dev_ws to build all the packages by colcon build.

10) test the working of the nodes by opening new terminals and creating a underlay by the install setup bash command.






## was unable to make the server to take the inputs from the topics in the input node.
