#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "math/number.h"
#include "math/add_two_numbers.h"
#include<stdlib.h>

using namespace math;

int main(int arc, char ** argv){
    ros::init(arc, argv, "input_node");
    ros::NodeHandle n;
    ros::Publisher topic1_pub = n.advertise<math::number>("topic1", 1000);
    ros::Publisher topic2_pub = n.advertise<math::number>("topic2", 1000);
    ros::ServiceClient client = n.serviceClient<math::add_two_numbers>("add_two_numbers");
    math::add_two_numbers srv;
    
    ros::Rate loop_rate(10);
    while(ros::ok()){
        math::number num1;
        math::number num2;
        num1.num = rand();
        num2.num = rand();
        srv.request.num1.num = num1.num;
        srv.request.num2.num = num2.num;
        ROS_INFO("Publishing %f to topic 1", num1.num);
        topic1_pub.publish(num1);
        ROS_INFO("Publishing %f to topic 2", num2.num);
        topic2_pub.publish(num2);
        if(client.call(srv)){
            ROS_INFO("Sum: %f", srv.response.sum.num);
        }
        ros::spinOnce();
        loop_rate.sleep();
    }

    
    return 0;
}