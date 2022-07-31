Assignment 2 

1. I used the ROS development studio to create this project using ROS noetic .

2. I created two pkg demo-gazebo and m2wr_description under src in simulation pkg .

3. Under m2wr_description , I created urdf folder and launch folder , I found the the code for m2wr_description on the  
   internet( https://github.com/mattborghi/m2wr_description/tree/master/m2wr_description) and i used the code to create files in 
   urdf and launch folder .
   
4. Under demo-gazebo pkg I created launch , world and models folder . I created the gazebo simulation i wanted in the empty_world.world file
   and added a custom model of a box using the model.sdf and model.config files . I created a launch file my_world.launch file to launch 
   this gazebo simulation .
   
   
HOW TO RUN

1. Launch the gazebo simulation using the command :-  roslaunch demo-gazebo my_world.launch

2. Spawn the robot in the gazebo simulation using the command :- roslaunch m2wr_description spawn.launch

3. we can control the robot by using the teleop keyboard by running :- rosrun teleop_twist_keyboard teleop_twist_keyboard.py 
