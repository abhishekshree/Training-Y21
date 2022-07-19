#include "ros/ros.h"
#include "math/add_two_ints.h"
#include <cstdlib>

int main(int argument_c, char **argument_v)
{
  ros::init(argument_c, argument_v, "input_node");


  ros::NodeHandle n;
  ros::Publisher topic1_pub = n.advertise<math::number>("topic1", 1000);
  ros::Publisher topic2_pub = n.advertise<math::number>("topic2", 1000);
  ros::ServiceClient client = n.serviceClient<math::add_two_ints>("add_two_ints");
  math::add_two_ints.srv;
   ros::Rate loop_rate(10);
    while(ros::ok()){
        math::number a;
        math::number b;

  srv.request.a = atoll(argument_v[1]);
  srv.request.b = atoll(argument_v[2]);
  ROS_INFO("Publishing %f to topic 1", a);
        topic1_pub.publish(a);
  ROS_INFO("Publishing %f to topic 2", b);
        topic2_pub.publish(b);
  if (client.call(srv))
  {
    ROS_INFO("Sum: %f", (long int)srv.response.sum);
  }
  ros::spinOnce();
  loop_rate.sleep();

  return 0;
}  
