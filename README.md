# ROS

## Content
- [Assignment 1](#assignment-1)
- [Assignment 2](#assignment-2)
- [Assignment 3](#assignment-3)
- [Assignment 4](#assignment-4)

## Assignment 1

**Aim:** Understing nodes, topics, publishers, subscribers, and services.

**Deadline:** 17th July, 2022

**Submission Format:**
- You have to create a pull request against the `ros` branch.
- Your PR should contain the `src` folder from the workspace.
- Your PR should contain the `README.md` file with all the details about how to run your code and the procedure you followed.

Essentially the folder structure will look like:

```bash
(on branch ros)

Training-Y21
├── 200028
│   ├── README.md
│   └── src
└── README.md

```

**Task:**

1. Create a catkin workspace for the assignments. You can name it whatever you want. (e.g. `catkin_ws` the `_ws` is just a convention)
2. Create a package called `math` in the workspace.
3. You have to create a node called `input_node` that will publish the sum of two numbers as a message. For that you will have to create two ROS topics and publish the two numbers (they can be fixed, preferably random numbers). 
4. Another node `output_node` will subscribe to the topics in `input_node` and publish the sum of the two numbers in another topic.
5. Create a service called `add_two_numbers` that will add two numbers and return the sum. The service will accept two numbers from topics in `input_node` and return the sum.


--- 

## Assignment 2
**Aim:** Understanding mapping and simulating the world.

**Deadline:** 27th July, 2022

**Submission Format:**
- Create a pull request (new) against the `ros` branch.
- Your PR should contain the `src` folder from the workspace.
- Your PR should contain the `README.md` file with all the details about how to run your code and the procedure you followed.
- A **screen recording** of the simulation is required (upload it on youtube and add the link in the README). Example: [here](https://youtu.be/unzPTIgUDTg)


**Task:**

Create a new package named `demo-gazebo`. Learn about how to create world files, and create one in the package. 

a. Customize it as per your choice with the following requirements:
- A model from the default gazebo library ex: postbox.
- A custom model outside the gazebo library.
- An additional source of light
- A custom physics solver 

b. Write a launch file to visualize/load this world in the simulation environment. The launch file goes into the launch folder.

c. Learn about Robot Modelling, explicitly URDF and XACRO. 

- Create a robot using the URDF file. (You are free to refer from the internet for this one).

- To move the robot use the differential drive plugin. Configure it to move your robot.

- Spawn the robot in the world you had created and try moving it from the terminal.

- Learn about teleop key package. Use it to drive your robot.

Useful Resources: 

[Lauch files](http://gazebosim.org/tutorials?tut=ros_roslaunch), [Physics engine](https://gazebosim.org/tutorials?tut=physics_params&cat=physics)

## Assignment 3
**Aim:** Understanding Navigation.

**Deadline:** 8th August, 2022

**Submission Format:**
- Create a pull request (new) against the `ros` branch.
- Your PR should contain a `navigation` workspace.
- Your PR should contain the `README.md` file with all the details about how to run your code and the procedure you followed.

**Task:**
- You guys must have done assignment 2. You are free to use the work from assignment 2 (the world and the robot).
- Create a new package named `navigation`.
- Add sensors to the robot. A laser, two cameras in the front and one in the back, an IMU, anything else you want.
- Use `rviz` to visualize the sensor feed. Record the video and upload it on youtube (same as in assignment 2).
- Read about tf, odometry, and gmapping packages. Create a functional gmaping node for the bot (subscribe odometry and laser). You will be using tf to transform the laser data to the robot frame. Visualize the map in rviz. Use map_server to generate an image of the map.

Useful Resources:
[tf](https://www.youtube.com/watch?v=Ra-nXIfPWdg),
[tf wiki](http://wiki.ros.org/tf),
[gmapping](http://wiki.ros.org/gmapping),
[odometry](https://groups.csail.mit.edu/drl/courses/cs54-2001s/odometry.html)


## Assignment 4
**Aim:** Understanding control systems.

**Deadline:** 20th August, 2022

**Submission Format:**
- Create a pull request (new) against the `ros` branch.
- Your PR should contain a `controls` folder with all the work done.
- Your PR should contain the `README.md` file with all the details about how to run your code and the procedure you followed.


**Task:**
- This task will be a bit theoretical. You will have to summarise and present [this playlist](https://www.youtube.com/playlist?list=PLUMWjy5jgHK1NC52DXXrriwihVrYZKqjk) upto lecture 31. You are free to use any medium to prepare the presentation (Don't copy, you're a very finite number of people).
- The next task will be to implement PID control to balance a cartpole. You will have to use only two packages openai gym and numpy. [Here](https://ethanr2000.medium.com/using-pid-to-cheat-an-openai-challenge-f17745226449) is the intuition behind the problem, understand and implement on your own (again, don't copy).

Note: Extra time is allotted for this task for you to understand control systems properly. Utilize that wisely, also you'll show your presentations at AUV Room.

