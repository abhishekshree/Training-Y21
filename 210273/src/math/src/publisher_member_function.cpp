#include <chrono>
#include <memory>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/msg/num.hpp"                                            

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0)
  {
    publisher1_ = this->create_publisher<tutorial_interfaces::msg::Num>("topic", 10);  
    publisher2_ = this->create_publisher<tutorial_interfaces::msg::Num>("topic2", 10);
    publisher3_ = this->create_publisher<tutorial_interfaces::msg::Num>("topic3", 10);

    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = tutorial_interfaces::msg::Num();  
    auto message2 = tutorial_interfaces::msg::Num();
    auto message3 = tutorial_interfaces::msg::Num();                     
    message.num = rand(); 
    message2.num = rand(); 
    message3.num=message.num + message2.num;                                                  
    RCLCPP_INFO_STREAM(this->get_logger(), "Publishing: '" << message.num << " " << message2.num << "'");    
    publisher1_->publish(message);
    publisher2_->publish(message2);
    publisher3_->publish(message3);


  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<tutorial_interfaces::msg::Num>::SharedPtr publisher1_;   
  rclcpp::Publisher<tutorial_interfaces::msg::Num>::SharedPtr publisher2_;  
  rclcpp::Publisher<tutorial_interfaces::msg::Num>::SharedPtr publisher3_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}