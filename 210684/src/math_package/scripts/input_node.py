#!/usr/bin/env python

import rospy
from std_msgs.msg import Float32

num = {
	1: None,
	2: None
}

def callback(data, topic_num):
	rospy.loginfo(f"Received {str(data.data)} from random_num_{topic_num}")
	num[topic_num] = data.data

def input_node():
	pub = rospy.Publisher("sum", Float32, queue_size=10)
	rospy.init_node("input_node")

	rospy.Subscriber("random_num_1", Float32, callback, 1)
	rospy.Subscriber("random_num_2", Float32, callback, 2)

	rate = rospy.Rate(10)

	while not rospy.is_shutdown():
		if (num[1] is not None) and (num[2] is not None):
			result = num[1] + num[2]
			pub.publish(result)
		rate.sleep()

if __name__ == "__main__":
	try:
		input_node()
	except rospy.ROSInterruptException:
		pass
