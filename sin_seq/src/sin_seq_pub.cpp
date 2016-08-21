#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float32.h"

#include <sstream>

float pi = 3.14159;

int main(int argc, char **argv)
{

  ros::init(argc, argv, "sin_seq_pub"); //Initializing ROS 
   
  ros::NodeHandle node; //Communication node

  ros::Publisher cec_pub = node.advertise<std_msgs::Float32>("cec", 1000); //ADVERTISE published object type, "/cec" topic and buffer size

  ros::Rate loop_rate(200); //messages sent at 200 Hz or msgs per second
  float count = 0;

  //create timed function param for 10sec dur
  double start_time = ros::Time::now().toSec();
  double time2stop = start_time + 10; //loop limited to 10 secs
  double cur_time;

  do
  {
    cur_time = ros::Time::now().toSec();
 
    //create Float32 or "float" in C++ buffer contents
    std_msgs::Float32 fl_msg ;

    //Calculate sinusoidal sequence
    double dt = cur_time - start_time; //change in time
    double angle = 2*pi*(2);//One cycle per every .5 sec times 2pi
    float buf = sin(angle*dt); //yields 20 periods in 10 secs

    //Output sinsoidal sequence
    std::cout << buf << "\n";
    fl_msg.data = buf; //add value to msg

    cec_pub.publish(fl_msg);  //PUBLISH MSG


    ros::spinOnce();  //one iteration
    loop_rate.sleep(); //break needed to for loop
    ++count; 
  }
  while(cur_time < time2stop);

  return 0; //end program
}

