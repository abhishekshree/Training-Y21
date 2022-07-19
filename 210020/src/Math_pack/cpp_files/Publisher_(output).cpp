#include "ros/ros.h"
#include "math/number.h"


ros::Publisher topic3_pubg;

void callback(const math::number::ConstPtr& a, const math::number::ConstPtr& b){
    ROS_INFO("I'm publishing %f", (a->num) + (b->num));
    math::number c;
    num3.num = (a->num) + (b->num);
    topic3_pubg.publish(c);
  
  
    int main(int argc, char **argv){
    ros::init(argc, argv, "output_node");
    ros::NodeHandle n;
    message_filters::Subscriber<math::number> topic1_sub(n, "topic1", 1);
    message_filters::Subscriber<math::number> topic2_sub(n, "topic2", 1);
    ros::Publisher topic3_pub = n.advertise<math::number>("topic3", 1000);
    topic3_pubg = topic3_pub;
    message_filters::TimeSynchronizer<math::number, math::number> sync(topic1_sub, topic2_sub, 10);
    sync.registerCallback(boost::bind(&callback, _1, _2));
    ros::spin();
    return 0;
      
      
}  
