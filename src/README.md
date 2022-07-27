HOW TO RUN
==
1. First open the catkin workspace (here : sim_ws)
2. Then build the project using catkin_make
3. run $ source ./devel/setup.bash
4. launch the project using launch file : $ roslaunch demo_gazebo my_world.launch

HOW TO MOVE THE ROBOT
==

 using msgs
   --
  1. the topic under which msgs are published is cmd/vel 
  2. the type of msg is geometric_msgs/Twist
  3. use command rostopic pub /cmd_vel geometric_msgs/Twist "
    Linear:
    x : a
    y : b
    z : c
    angular:
    x : d
    y : e
    z : f
    " (here a b c d e f are numbers)
  using teleop package
  --
    1.rosrun teleop_twist_keyboard teleop_twist_keyboard.py
    2.control through the keyboard.
    
    
HOW I MADE IT
==
1. make a package demo_gazebo and make folders : models,launch,world
2. take a model from gazebo library, I took house_1
3. make a world file and a launch file and put your model in the world file
4  for custom model i made a model.config and model.sdf file and placed the details of the model in .sdf
5. To edit the default path i added a path of my model in the launch file.
6. for the robot i made a robot folder in package and in urdf folder I made a .xacro and .gazebo file
7. I took resourced from internet for writing the file and also made a mesh file .dae for which i used resources online
8. I edited the launch file to contain the robot and also made a robot_description.launch file for working of robots kinematics.
