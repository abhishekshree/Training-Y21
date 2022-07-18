#!/usr/bin/env python

import rospy
from std_msgs.msg import Float32

result = None

def callback(data):
	rospy.loginfo(f"Received {str(data.data)} from sum.")
	result = data.data

def output_node():
	pub = rospy.Publisher("another_sum", Float32, queue_size=10)
	rospy.init_node("output_node")

	rospy.Subscriber("sum", Float32, callback)

	rate = rospy.Rate(10)

	while not rospy.is_shutdown():
		if result is not None:
			pub.publish(result)
		rate.sleep()

if __name__ == "__main__":
	try:
		output_node()
	except rospy.ROSInterruptException:
		pass
