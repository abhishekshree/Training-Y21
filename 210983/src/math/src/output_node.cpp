#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "math/number.h"
#include "message_filters/subscriber.h"
#include "message_filters/time_synchronizer.h"

// using namespace message_filters;
using namespace math;

ros::Publisher topic3_pubg;

void callback(const math::number::ConstPtr& num1, const math::number::ConstPtr& num2){
    ROS_INFO("I'm publishing %f", (num1->num) + (num2->num));
    math::number num3;
    num3.num = (num1->num) + (num2->num);
    topic3_pubg.publish(num3);
}

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