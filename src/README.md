1. Created a workspace for working, catkin_ws.
2. Created a package "demo-gazebo" using the catkin_make command.
3. Used the roslaunch command to launch an empty world in gazebo.
4. Created a launch folder within the package to add the launch and the world files.
5. We create a test.launch file within the launch folder, name the our world as "world".
6. We now create a world folder within the package and create a test.world file within this folder.
7. We can edit this world file to include our requirements.
8. We then create a custom model by creating a folder named "models" in the package, then further adding the model folder in it, which contains the .sdf and the .config files.
9. We then edit the .launch and the .world files accordingly to add the custom model.
10. Then use the catkin_make command to compile the codes.
11. To add the custom physics solver, we edit the world file and add the 'world' solver. I've also added some constraints and the max_step_size parameters.
12. To spawn the robot, we first git clone the package of the robot. Here, i've used the Two-wheeled robot, 'm2wr'.
13. We then modify the launch file to include the robot model node.
14. Then we compile the files using catkin_make, source the code and spawn the robot in our world.
15. The .xacro file in the udrf folder allows us to use topics and msgs to move our robot.
16. We then use the cmd/vel method to move the robot.
17. Then we use the teleop method to configure the robot through the keyboard.

To Run the code:
1. roslaunch demo-gazebo test.launch
2. Then on a new terminal, use the cmd/vel command to move the robot, eg- rostopic pub /cmd_vel geometry_msgs/Twist -- '[1.0,0.0,0.0]' '[0.0,0.0,0.0]'
3. Now, use the teleop command to use the keyboard to steer the robot, rosrun teleop_twist_keyboard teleop_twist_keyboard.py

Link- https://youtu.be/w1WqLXZu540