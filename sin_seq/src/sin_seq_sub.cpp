#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float32.h"

//function to callback topic msgs received
void cecCallback(const std_msgs::Float32::Ptr& msg)
{
//  ROS_INFO("I heard: [%s]", msg->data.str());
//  ROS_INFO("I heard: [%s]", msg);
  std::cout<< "Message received: " << msg->data << "\n";
}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "sin_seq_sub");

  ros::NodeHandle node;

  ros::Subscriber sub = node.subscribe("cec", 1000, cecCallback); //SUBSCRIBE to topic, set buffer, and call function will REGISTER on ROS_MASTER_URI if terminal with roscore is running

  ros::spin(); //endless iterations while listening

  return 0;
}

