# How to run
 1). Create a catkin workspace using **catkin_make** in a suitable directory say, catkin_ws  
 2). Source the setup file using **source devel/setup.bash** or **source devel/setup.zsh** depending on your terminal.  
 3). Move to the workspace and build the packages using **catkin_make**.   
 3). Run **roslaunch gazobo-demo demo.launch** to start the simulation.  
 4). Publish messages to **cmd_vel** rostopic directly from the terminal using **rostopic pub**, for example **rostopic pub /cmd_vel geometry_msgs/Twist -- '[0.1,0,0]' '[0.0, 0.0,0]'** to make the robot move forward.  
 5). Alternatively, use the teleop package to control the bot directly using keyboard. In a seperate terminal, run **rosrun teleop_twist_keyboard teleop_twist_keyboard.py**.  

 # Steps Followed
 1). Made a package inside a catkin workspace called **gazebo-demo** and created launch and worlds folder.  
 2). Created a custom SDF model of a block in the models directory.  
 3). Created a world file in the worlds directory with ground, light, a gazebo-library model and the custom sdf model.  
 4). Created a launch file in the launch directory, linked the path to models directory.  
 5). After testing the simulation, to make the URDF robot used a custom Addon for fusion 360 which exports fusion models into URDF(https://github.com/syuntoku14/fusion2urdf). Created a simple two wheeled model in fusion 360 and exported it to URDF.  
 6). Added the build package into my src folder(**two-wheeled-robot_description**) and made neccessary changes for the URDF to work properly. Added code in the **demo.launch** file to spwan this model when the simulation starts.  
 7). Added the differential driver controller in the URDF of the robot to accept messages from the command line.  
 8). Installed  teleop using **sudo apt-get install ros-noetic-teleop-twist-keyboard** and ran it using **rosrun teleop_twist_keyboard teleop_twist_keyboard.py**.  

 Video of the simulation :- https://www.youtube.com/watch?v=yPozvo0A-ro