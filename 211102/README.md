# Procedure I followed:
1.created a workspace and then a package with dependencies as required
2created src directory
3.made a scripts folder for storing my code for the nodes and services
4.wrote my input_node.py (it gives you two random numbers in two topics int_1 and int_2 )and output_node.py and edited my cmakelists to include the package dependencies and install cmake python files
5.for services I made an .srv file srv_format and a server and a client. The client took data from the topics created above and then we got the output as the sum of the two numbers.

# How to run my code
1.run roscore in a terminal
2.in new terminal:
3.go to the directory of my workspace
4.source the workspace using  source ./devel/setup.bash
  ## for publisher and subscriber
  ->run using the rosrun <package> <node_name>
  ->first input node
  ->in new terminal run the output node
  ## for service 
  ->in new terminal with input node running in one terminal run server node 
  ->then run the client node
