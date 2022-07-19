# Procedure to run code
Create a new workspace in the ros environment. Ex- "Catkin_ws".
Source the setup file using "source devel/setup.bash". And then copy math_pack folder into src folder of ws. Then build the package.(use  catkin_make)
run "roscore" in a new terminal. Then in new terminals we run "rosrun math subscriber_(input)" , "rosrun math publisher_(output)" , "rosrun math adding".

# How I proceded in this task.
I Used the 'create_ros_pkg' command to create a package named "mathpack" in the src folder of the workspace.I used roscpp,rospy,etc.
In the math pkg I created a folder "src" in which we create files subscriber_(input) , publisher_(output) , adding. I read and applied the things taught in the tutorial (wiki Ros) provided and searched youtube for understanding somethings. Then I wrote code for publisher, subscriber and service. I create ros msg and ros srv and then edited cmakelist.txt and package.xml.
