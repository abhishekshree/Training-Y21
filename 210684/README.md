# Assignment 1

The package `math_package` has been created which contains some nodes, a service node and a client node. The nodes have been written in python using the `rospy` package.

The following scripts are there:
- `random_num.py`: Creates the node `random_num_generator`. Generates 2 random numbers and publishes them to two topics, `random_num_1` and `random_num_2`.
- `input_node.py`: Creates the node `input_node` which is subscribed to `random_num_1` and `random_num_2`. It publishes sum of the received numbers to `sum`.
- `output_node.py`: Creates the node `output_node` which is subscribed to `sum` and publishes the sum to `another_sum`.
- `add_two_numbers_service.py`: Creates a service named `add_two_numbers` through a node `add_two_numbers_server`.
- `add_two_numbers_client.py`: This script is called using `rosrun` to take the numbers being published by `random_num_1` and `random_num_2`, and calls the service to get their sum.

## Running the package

1. Make sure you have sourced the setup file of ROS:
```source /opt/ros/noetic/setup.bash```
2. Open the terminal in the directory containing this README.
3. Run `catkin_make` to build the required files. This also initialises the directory as a catkin workspace.
4. Source the setup file for the workspace by `source devel/setup.bash`.
5. Run the package by `roslaunch math_package math_package.launch`.
