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

#include "GraphWindow.h"
#include "ui_GraphWindow.h"
#include <core/Backend.h>

double velocity = 0;

GraphWindow::GraphWindow(QWidget *parent, Backend &backend) :
    ConfigurableWidget(parent),
    ui(new Ui::GraphWindow),
    _backend(backend)
{
    ui->setupUi(this);

    customPlot = new QCustomPlot(this);

    Roll = new QCPCurve(customPlot->xAxis, customPlot->yAxis);
    Roll->setName("Roll");
    Roll->setPen(QPen(Qt::red,1.5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    Pitch = new QCPCurve(customPlot->xAxis, customPlot->yAxis);
    Pitch->setName("Pitch");
    Pitch->setPen(QPen(Qt::green,1.5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    Yaw = new QCPCurve(customPlot->xAxis, customPlot->yAxis);
    Yaw->setName("Yaw");
    Yaw->setPen(QPen(Qt::blue,1.5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    Gryo_x = new QCPCurve(customPlot->xAxis, customPlot->yAxis);
    Gryo_x->setName("Gryo x");
    Gryo_x->setPen(QPen(Qt::yellow,1.5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    Gryo_y = new QCPCurve(customPlot->xAxis, customPlot->yAxis);
    Gryo_y->setName("Gryo y");
    Gryo_y->setPen(QPen(Qt::cyan,1.5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    Gryo_z = new QCPCurve(customPlot->xAxis, customPlot->yAxis);
    Gryo_z->setName("Gryo z");
    Gryo_z->setPen(QPen(Qt::darkYellow,1.5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    customPlot->setGeometry(5,5,1150,700);
    customPlot->legend->setVisible(true);
    customPlot->legend->setBrush(QColor(255,255,255,0));
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    customPlot->rescaleAxes();
    // add the cursorXY
    customPlot->addGraph();
    customPlot->graph(0)->setName("Cursor_x");
    customPlot->addGraph();
    customPlot->graph(1)->setName("Cursor_y");

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    customPlot->xAxis->setTicker(timeTicker);
    customPlot->axisRect()->setupFullAxesBox();
    customPlot->yAxis->setRange(-180, 180);

    // add a Easter egg (●'◡'●)
    customPlot->addGraph();
    customPlot->graph(2)->setPen(QColor(50, 50, 50, 255));
    customPlot->graph(2)->setLineStyle(QCPGraph::lsNone);
    customPlot->graph(2)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDiamond, 4));
    customPlot->graph(2)->setName(" ");
    file = new QFile("/home/qi/Qt_Projects/IMU-Visual-Tool-CANOPEN/src/assets/pointXY.csv");
    textStream = new QTextStream;
    if(!file->open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this,"","Can nossst load the csv file");
        isFileOpened = 0;
    }else{
        isFileOpened = 1;
        textStream->setDevice(file);
    }

    // make left and bottom axes transfer their ranges to right and top axes:
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));
    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
    dataTimer = new QTimer(this);
    connect(dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
    dataTimer->start(0); // Interval 0 means to refresh as fast as possible

    tfPublishTimer = new QTimer(this);
    connect(tfPublishTimer, SIGNAL(timeout()), this, SLOT(tfPublisheslot()));
    dataTimer->start(0.02); // 50HZ

    easterEggTimer = new QTimer(this);
    connect(easterEggTimer, SIGNAL(timeout()), this, SLOT(easterEggDataSlot()));

    customPlot->replot();
    connect(customPlot,&QCustomPlot::mouseMove,this,&GraphWindow::myMoveEvent);

    attitude_pub = rosHandle.advertise<std_msgs::String>("/test", 10);
}

void GraphWindow::realtimeDataSlot()
{
    if(!isPlayEasterEgg)
    {
        // rescale value (vertical) axis to fit the current data:
        Roll->rescaleValueAxis(true);
        // make key axis range scroll with the data (at a constant range size of 8):

        customPlot->replot();
    }
}

void GraphWindow::tfPublisheslot()
{
    // pub attitude Msg to ROS
//    tf::TransformBroadcaster tfBroadCaster;
//    tfBroadCaster.sendTransform(tf::StampedTransform(
//        tf::Transform(tf::createQuaternionFromRPY(currentRoll/180.0*M_PI,currentPitch/180.0*M_PI,currentYaw/180.0*M_PI),
//        tf::Vector3(0.0, 0.0, 0.0)),
//        ros::Time::now(), "world", "PCB")
//        );
}

void GraphWindow::DecodeCANMsg(QString string)
{
    // decode Euler-Angle
    QStringList sections = string.split(QRegExp("[ ,*/^]"));
    currentRoll = (sections[1]+sections[0]).toInt(nullptr,16);
    currentPitch = (sections[3]+sections[2]).toInt(nullptr,16);
    currentYaw = (sections[5]+sections[4]).toInt(nullptr,16);
    if(currentRoll<=0X7FFF){
        currentRoll = currentRoll/32767.0*180;
    }else{
        currentRoll = (currentRoll-65535)/32767.0*180;
    }
    if(currentPitch<=0X7FFF){
        currentPitch = currentPitch/32767.0*180;
    }else{
        currentPitch = (currentPitch-65535)/32767.0*180;
    }
    if(currentYaw<=0X7FFF){
        currentYaw = currentYaw/32767.0*180;
    }else{
        currentYaw = (currentYaw-65535)/32767.0*180;
    }

    rollQueue.append(currentRoll);
    pitchQueue.append(currentPitch);
    yawQueue.append(currentYaw);

    tfBroadCaster.sendTransform(tf::StampedTransform(
        tf::Transform(tf::createQuaternionFromRPY(-currentRoll/180.0*M_PI,-currentPitch/180.0*M_PI,currentYaw/180.0*M_PI),
        tf::Vector3(0.0, 0.0, 0.0)),
        ros::Time::now(), "world", "PCB")
        );

    // add data to lines:
    static double key = 0;
    if(!rollQueue.isEmpty())
    {
        key += 0.05;

        if((checkBoxStateBus & 3) == 2)
            Roll->addData(key,rollQueue.front());
        if((checkBoxStateBus & 12) >> 2 == 2)
            Pitch->addData(key,pitchQueue.front());
        if((checkBoxStateBus & 48) >> 4 == 2)
            Yaw->addData(key,yawQueue.front());

        rollQueue.pop_front();
        pitchQueue.pop_front();
        yawQueue.pop_front();

        if(((checkBoxStateBus & 786432) >> 18 == 2))
            customPlot->xAxis->setRange(key, xAxisRange, Qt::AlignRight);
    }
}

// save memory, from me on!
void GraphWindow::rollDataSlot(int state)
{
    checkBoxStateBus &= (uint32_t)(0xFFFFFFFF-3);
    checkBoxStateBus |= (uint32_t)state; //state = 2 is checked
}

void GraphWindow::pitchDataSlot(int state)
{
    checkBoxStateBus &= (uint32_t)(0xFFFFFFFF-12);
    checkBoxStateBus |= ((uint32_t)state << 2);
}

void GraphWindow::yawDataSlot(int state)
{
    checkBoxStateBus &= (uint32_t)(0xFFFFFFFF-48);
    checkBoxStateBus |= ((uint32_t)state << 4);
}

void GraphWindow::gryoXDataSlot(int state)
{
    checkBoxStateBus &= (uint32_t)(0xFFFFFFFF-192);
    checkBoxStateBus |= ((uint32_t)state << 6);
}

void GraphWindow::gryoYDataSlot(int state)
{
    checkBoxStateBus &= (uint32_t)(0xFFFFFFFF-768);
    checkBoxStateBus |= ((uint32_t)state << 8);
}

void GraphWindow::gryoZDataSlot(int state)
{
    checkBoxStateBus &= (uint32_t)(0xFFFFFFFF-3072);
    checkBoxStateBus |= ((uint32_t)state << 10);
}

void GraphWindow::dynamicModeChanged(int state)
{
    checkBoxStateBus &= (uint32_t)(0xFFFFFFFF-786432);
    checkBoxStateBus |= ((uint32_t)state << 18);
}

void GraphWindow::sliderXValueChanged(int value)
{
    xAxisRange = value+1;
}

void GraphWindow::myMoveEvent(QMouseEvent *event)
{
    double x = event->pos().x();
    double x_ = customPlot->xAxis->pixelToCoord(x);

    double y = event->pos().y();
    double y_ = customPlot->yAxis->pixelToCoord(y);

    //更新光标位置
    QVector<double> x_1(101), y_1(101);
    for (int i=0; i<101; ++i)
    {
        x_1[i] = customPlot->xAxis->range().lower+
                i*(customPlot->xAxis->range().upper-customPlot->xAxis->range().lower)/101;
        y_1[i] = y_;
    }
    customPlot->graph(0)->setData(x_1,y_1);
    customPlot->graph(0)->setPen(QPen(Qt::black,1.5, Qt::DashLine, Qt::RoundCap, Qt::RoundJoin));

    QVector<double> x_2(101), y_2(101);
    for (int i=0; i<101; ++i)
    {
        x_2[i] = x_;
        y_2[i] = customPlot->yAxis->range().lower+
                i*(customPlot->yAxis->range().upper-customPlot->yAxis->range().lower)/101;
    }
    customPlot->graph(1)->setData(x_2,y_2);
    customPlot->graph(1)->setPen(QPen(Qt::black,1.5, Qt::DashLine, Qt::RoundCap, Qt::RoundJoin));

    customPlot->replot();

    QString str = QString("  X: %1\n""  Y: %2").arg(QString::number(x_,10,3)).arg(QString::number(y_,10,3));
    QToolTip::showText(cursor().pos(),str);
}

void GraphWindow::easterEggDataSlot()
{
    // read the csv pointXYdata
    // read a frame each slot
    if(isFileOpened)
    {
        // read a line which contains the data in this frame
        QStringList stringList = textStream->readLine().split(",");
        QVector<double> point_x((stringList.size()-1)/2), point_y((stringList.size()-1)/2);
        for (int i=0; i<stringList.size()-1-1; i+=2)
        {
            point_y[i/2] = (1.2-stringList[i].toShort()/1080.0*2.4);
            point_x[i/2] = (stringList[i+1].toShort()/1920.0*16);
        }
        customPlot->graph(2)->setData(point_x,point_y);
        customPlot->replot();
    }
    // the easter egg is finished
    if(++frameCount == 675){
        frameCount = 0;
        isPlayEasterEgg = 0;
        textStream->seek(0);
        customPlot->graph(2)->data().clear();
        customPlot->replot();
        easterEggTimer->stop();
    }
}

void GraphWindow::startEasterEggSlot()
{
    short static PosionedCounter = 0;
    if(frameCount == 0){
        easterEggTimer->start(50);
        isPlayEasterEgg = 1;
        customPlot->xAxis->setRange(16, 16, Qt::AlignRight);
        customPlot->replot();
        if((PosionedCounter++)%2 == 0)
            QMessageBox::information(this,"","恭喜你发现了宝藏！");
        else
            QMessageBox::information(this,"","中毒了吧！再看一遍？");
    }
}

void GraphWindow::sendCmdCANMsg(void)
{
    static CanMessage msg;
    static uint8_t data_int[8];
    static uint32_t address;
    static bool en_extended = false;
    static uint8_t dlc = 8;
    if((checkBoxStateBus & 196608) >> 16 == 2){
//        Pos Cmd Mode
        data_int[0] = 0;
        data_int[1] = 0;
        data_int[2] = 0;
        data_int[3] = 0;
        data_int[4] = 0;
        data_int[5] = 0;
        data_int[6] = 0;
        data_int[7] = 0;
        address = 0x121;
    }else{
//        Velocity Cmd Mode
        data_int[0] = 0;
        data_int[1] = 0;
        data_int[2] = 0;
        data_int[3] = 0;
        data_int[4] = 0;
        data_int[5] = 0;
        data_int[6] = 0;
        data_int[7] = 0;
        address = 0x212;
    }

    // If address is beyond std address namespace, force extended
    if(address > 0x7ff)
    {
        en_extended = true;
    }

    msg.setData(data_int[0],data_int[1],data_int[2],data_int[3],data_int[4],data_int[5],data_int[6],data_int[7]);
    msg.setId(address);
    msg.setLength(dlc);

    msg.setExtended(en_extended);
    msg.setRTR(false);
    msg.setErrorFrame(false);

    //CanTrace *trace = _backend.getTrace();
    foreach (CanInterfaceId ifid, _backend.getInterfaceList()) {
        CanInterface *intf = _backend.getInterfaceById(ifid);
        int tx_ret = intf->sendMessage(msg);
        if (tx_ret) {
            //msg.setTX(true);
            //trace->enqueueMessage(msg, false);
        }

        char outmsg[256];
        snprintf(outmsg, 256, "Send %s [%s] to %d on port %s [ext=%u rtr=%u err=%u] ",
                 tx_ret ? "ok" : "err",msg.getDataHexString().toLocal8Bit().constData(), msg.getId(), _backend.getInterfaceById(ifid)->getName().toLocal8Bit().constData(),
                 msg.isExtended(), msg.isRTR(), msg.isErrorFrame());

        if (tx_ret)
            log_info(outmsg);
        else
            log_error(outmsg);
    }
}

GraphWindow::~GraphWindow()
{
    delete ui;
    delete customPlot;
    delete Roll;
    delete Pitch;
    delete Yaw;
    delete Gryo_x;
    delete Gryo_y;
    delete Gryo_z;

    delete dataTimer;
    delete tfPublishTimer;

    delete easterEggTimer;
    delete file;
    delete textStream;
}
