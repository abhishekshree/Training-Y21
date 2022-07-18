#!/usr/bin/env python

import rospy
import sys

from math_package.srv import add_two_numbers

def handler(req):
	rospy.loginfo(f"Requested to add {req.num_1} and {req.num_2}")
	return {"sum": (req.num_1 + req.num_2)}

def add_two_numbers_srv():
	rospy.init_node('add_two_numbers_server')
	ser = rospy.Service('add_two_numbers', add_two_numbers, handler)
	print("Service started and ready to add number...")
	rospy.spin()

if __name__ == "__main__":
	add_two_numbers_srv()
