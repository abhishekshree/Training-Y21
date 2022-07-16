#include "ros/ros.h"
#include "math/add_two_numbers.h"

bool add(math::add_two_numbers::Request &req, math::add_two_numbers::Response &res){
    res.sum.num = req.num1.num + req.num2.num;
    ROS_INFO("request: x=%f, y=%f", req.num1.num, req.num2.num);
    ROS_INFO("sending back response: [%f]", res.sum.num);
    return true;
}

int main(int argc, char **argv){
    ros::init(argc, argv, "add_two_numbers_server");
    ros::NodeHandle n;

    ros::ServiceServer service = n.advertiseService("add_two_numbers", add);
    ROS_INFO("Ready to add");
    ros::spin();

    return 0;
}