/*

  Copyright (c) 2020 Xiaofang Qi <qi.shield95@foxmail.com>

  This file is part of cangaroo specific for foc drive.

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
#pragma once

#include <core/Backend.h>
#include <core/ConfigurableWidget.h>
#include <core/MeasurementSetup.h>
#include <QFile>
#include <QTextStream>
#include <QQueue>
#include <qcustomplot/qcustomplot.h>
#include <QDebug>


// the CAN-Lib header files
#include <core/Backend.h>
#include <core/ConfigurableWidget.h>
#include <core/MeasurementSetup.h>
#include <driver/CanInterface.h>
#include <core/CanTrace.h>

// ROS headfiles
#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>
#include <tf/transform_broadcaster.h>

namespace Ui {
class GraphWindow;
}

class GraphWindow : public ConfigurableWidget
{
    Q_OBJECT

public:
    explicit GraphWindow(QWidget *parent, Backend &backend);
    ~GraphWindow();

    // use qcustomplot for graph analyzer
    int paint_Flag = 0;
    int timer_count = 0;
    QCustomPlot *customPlot;
    QCPCurve *Roll;
    QCPCurve *Pitch;
    QCPCurve *Yaw;
    QCPCurve *Gryo_x;
    QCPCurve *Gryo_y;
    QCPCurve *Gryo_z;

    QTimer   *dataTimer;
    QTimer   *easterEggTimer;
    QTimer   *tfPublishTimer;
    short    frameCount = 0;

    QTextStream *textStream;
    QFile *file;
    bool isFileOpened = 0;
    bool isPlayEasterEgg  = 0;

    uint32_t checkBoxStateBus = 0;

    // manual mode parameters
    float xAxisRange = 5;

    // the attitude store buffer
    std_msgs::String msg;
    ros::Publisher attitude_pub;

    QQueue<float> yawQueue;
    QQueue<float> pitchQueue;
    QQueue<float> rollQueue;
    QQueue<QQuaternion> quaternionQueue;

    float currentRoll = 0;
    float currentPitch = 0;
    float currentYaw = 0;

    void sendCmdCANMsg(void);

    void myMoveEvent(QMouseEvent *event);
    Ui::GraphWindow *ui;

private slots:

    void realtimeDataSlot();
    void easterEggDataSlot();
    void tfPublisheslot();

public slots:

    void startEasterEggSlot();

    void rollDataSlot(int state);
    void pitchDataSlot(int state);
    void yawDataSlot(int state);
    void gryoXDataSlot(int state);
    void gryoYDataSlot(int state);
    void gryoZDataSlot(int state);

    void dynamicModeChanged(int state);

    void sliderXValueChanged(int value);

    void DecodeCANMsg(QString string);

private:

    Backend &_backend;
};
