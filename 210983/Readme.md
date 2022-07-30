 # How to Run
 
 1). Create a catkin workspace using **catkin_make** in a suitable directory say, catkin_ws  
 2). Source the setup file using **source devel/setup.bash** or **source devel/setup.zsh** depending on your terminal.  
 3). Copy the **math** folder into the src folder of your workspace.  
 4). In your workspace, build the package using **catkin_make**.  
 4). To run the nodes, in a new terminal run **roscore**.  
 5). In new terminals, run **rosrun math input_node**, **rosrun math output_node** and **rosrun math add_two_numbers_server**.  

 # Steps Followed
 1). First created a custom msg which holds a Float64 with a header(used for Time Sync in output node) and a serivce file called add_two_numbers.srv.  
 2). Wrote the code for the input node in C++ which publishes two msgs to two topics(topic1 and topic2) and makes a request to the previously created service.  
 3). Wrote the output node to subscribe to the two topics log the sum and also publish the sum to another topic(topic3) which currently has no subscribers. I had to use **message_filters** to syncronize the messages from the two topics to use a single callback function.  
 4). Wrote the server for add_two_ints service.  
 5). Added the neccesary lines in CMakeLists.txt to make the package successfully.  