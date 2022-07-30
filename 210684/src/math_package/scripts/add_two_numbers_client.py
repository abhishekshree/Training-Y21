#!/usr/bin/env python

import rospy
from math_package.srv import add_two_numbers
from std_msgs.msg import Float32

def add_two_numbers_cli():
	rospy.init_node('add_two_numbers_client')
	
	num1 = rospy.client.wait_for_message("random_num_1", Float32).data
	num2 = rospy.client.wait_for_message("random_num_2", Float32).data
	print(f"Recieved numbers {num1} and {num2}.")
	print("Calling the service...")
	rospy.wait_for_service('add_two_numbers')

	try:
		add_two_numbers_srv = rospy.ServiceProxy('add_two_numbers', add_two_numbers)
		return add_two_numbers_srv(num1, num2).sum
	except rospy.ServiceException as e:
		print(f"Serive call failed:\n{e}")

if __name__ == "__main__":
	nums_sum = add_two_numbers_cli()
	if nums_sum is not None:
		print(f"The sum recieved is {nums_sum}.")
