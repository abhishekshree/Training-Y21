import rospy

from std_msgs.msg import Float64

num=[None,None]
def callback1(data):
    num[0]=data.data
    
def callback2(data):
    num[1]=data.data
    


def output_node():
    rospy.init_node("output_node")
    rospy.Subscriber("int_1", Float64, callback1)
    rospy.Subscriber("int_2", Float64, callback2)
	
    while not rospy.is_shutdown():
        if((num[0] is not None) and (num[1] is not None)):
            print(num[0]+num[1])
            break

if __name__=="__main__":
    try:
        output_node()
    except rospy.ROSInterruptException:
        pass
