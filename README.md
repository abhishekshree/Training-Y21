# ROS

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
│   ├── README.md
│   └── src
└── README.md

```

**Task:**

1. Create a catkin workspace for the assignments. You can name it whatever you want. (e.g. `catkin_ws` the `_ws` is just a convention)
2. Create a package called `math` in the workspace.
3. You have to create a node called `input_node` that will publish the sum of two numbers as a message. For that you will have to create two ROS topics and publish the two numbers (they can be fixed, preferably random numbers). 
4. Another node `output_node` will subscribe to the topics in `input_node` and publish the sum of the two numbers in another topic.
5. Create a service called `add_two_numbers` that will add two numbers and return the sum. The service will accept two numbers from topics in `input_node` and return the sum.
