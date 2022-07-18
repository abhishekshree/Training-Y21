#include "ros/ros.h"
#include "math/add_two_ints.h"

bool add(math::add_two_ints::Request  &req,
         math::add_two_ints::Response &res)
{
  res.sum = req.a + req.b;
  ROS_INFO("request: x=%f, y=%f", (long int)req.a, (long int)req.b);
  ROS_INFO("sending back response: [%f]", (long int)res.sum);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "add_two_ints_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("add_two_ints", add);
  ROS_INFO("Ready to add two ints.");
  ros::spin();

  return 0;
} 