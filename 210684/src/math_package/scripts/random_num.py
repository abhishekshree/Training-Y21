#!/usr/bin/env python

import random
import rospy
from std_msgs.msg import Float32

def publish_rand_num():
	pub1 = rospy.Publisher("random_num_1", Float32, queue_size=10)
	pub2 = rospy.Publisher("random_num_2", Float32, queue_size=10)
	rospy.init_node("random_generator")

	rate = rospy.Rate(10)

	rand1 = random.random()
	rand2 = random.random()

	rospy.loginfo(f"Publishing {rand1} to random_num_1")
	rospy.loginfo(f"Publishing {rand2} to random_num_2")

	while not rospy.is_shutdown():
		pub1.publish(rand1)
		pub2.publish(rand2)

		rate.sleep()

if __name__ == "__main__":
	try:
		publish_rand_num()
	except rospy.ROSInterruptException:
		pass
