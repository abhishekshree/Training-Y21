#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/msg/num.hpp"                                       

using std::placeholders::_1;
using std::placeholders::_2;


class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
  : Node("minimal_subscriber")
  {
    publisher4_ = this->create_publisher<tutorial_interfaces::msg::Num>("topic4", 10); 
    subscription3 = this->create_subscription<tutorial_interfaces::msg::Num>(    
      "topic3", 10, std::bind(&MinimalSubscriber::topic_callback, this,_1));
    
    
  }
  

private:
  void topic_callback(const tutorial_interfaces::msg::Num & msg)
  const  
  {
    
    RCLCPP_INFO_STREAM(this->get_logger(), "Sum is: '" << msg.num << "'"); 
    publisher4_->publish(msg);
  }
  
 
  rclcpp::Subscription<tutorial_interfaces::msg::Num>::SharedPtr subscription3; 
  rclcpp::Publisher<tutorial_interfaces::msg::Num>::SharedPtr publisher4_; 
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}