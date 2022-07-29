#!/usr/bin/env python

from __future__ import print_function

import sys
import rospy
from std_msgs.msg import Float64
from math_package.srv import srv_format, srv_formatResponse


def handle_add(msg):
    ans=msg.int1+msg.int2
    return ans
    
    
def add_two_numbers_service():
    rospy.init_node("add_two_numbers_server")
    s=rospy.Service("add_two_numbers",srv_format, handle_add)
    print("Good to go")
    rospy.spin()
    
if __name__=="__main__":
    add_two_numbers_service() 
