#include "ros/ros.h"
#include "nav_msgs/Odometry.h"

void OdomCallback(const nav_msgs::Odometry::ConstPtr& msg){
    double x = msg->pose.pose.position.x;
    double y = msg->pose.pose.position.y;
    ROS_INFO("x: %f, y: %f", x, y);            
}


int main(int argc, char** argv){


    return 0;
}

