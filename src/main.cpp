/*

  Copyright (c) 2015, 2016 Hubert Denkmair <hubert@denkmair.de>

  This file is part of cangaroo.

  cangaroo is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  cangaroo is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with cangaroo.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "mainwindow.h"
#include <QApplication>
#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    ros::init(argc, argv, "command_publisher");
    ros::NodeHandle rosHandle;
    ros::Publisher command_pub = rosHandle.advertise<std_msgs::String>("/test", 10);

//    ros::Rate loop_rate(2);
//    std_msgs::String msg;
//    while(ros::ok()){
//        msg.data = "This is a test";
//        command_pub.publish(msg);

//        loop_rate.sleep();
//    }

    return a.exec();
}
