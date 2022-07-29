#!/usr/bin/env python

from __future__ import print_function

import sys
import rospy
from math_package.srv import srv_format
from std_msgs.msg import Float64


def add_two_numbers_():
    rospy.init_node("add_two_numbers_client")
    int1 = rospy.client.wait_for_message("int_1", Float64).data
    int2 = rospy.client.wait_for_message("int_2", Float64).data
    rospy.wait_for_service("add_two_numbers") 
    
    try:
        add_two_numbers_service = rospy.ServiceProxy("add_two_numbers",srv_format)
        #ans=int1+int2
        return add_two_numbers_service(int1,int2).sum
    except rospy.ServiceException as e:
        print("Service call failed: %s"%e)
        
if __name__ == "__main__":
    ans=add_two_numbers_()
    if ans is not None:
        print(f"{ans}")
    
