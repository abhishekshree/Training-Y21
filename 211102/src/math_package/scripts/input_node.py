#!/usr/bin/env python


import rospy
import random
from std_msgs.msg import Float64

def input_node():
    pub1 = rospy.Publisher('int_1',Float64, queue_size=10)
    pub2 = rospy.Publisher('int_2',Float64, queue_size=10)
    rospy.init_node("input_node")
    num1=random.random()
    num2=random.random()
    rospy.loginfo(f"The two numbers out of the lottery are {num1} and {num2}")
    while not rospy.is_shutdown():
        pub1.publish(num1)
        pub2.publish(num2)
	
if __name__ == "__main__":
    try:
        input_node()
    except rospy.ROSInterruptException:
        pass
