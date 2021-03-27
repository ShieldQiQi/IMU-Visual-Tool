lessThan(QT_MAJOR_VERSION, 5): error("requires Qt 5")

QT += core gui
QT += widgets
QT += xml
#QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = imuVisualTool
TEMPLATE = app
CONFIG += warn_on
CONFIG += link_pkgconfig

DESTDIR = ../bin
MOC_DIR = ../build/moc
RCC_DIR = ../build/rcc
UI_DIR = ../build/ui
unix:OBJECTS_DIR = ../build/o/unix
win32:OBJECTS_DIR = ../build/o/win32
macx:OBJECTS_DIR = ../build/o/mac


SOURCES += main.cpp\
    mainwindow.cpp \
    qcustomplot/qcustomplot.cpp \

HEADERS  += mainwindow.h \
    qcustomplot/qcustomplot.h \

# add ROS independencies
INCLUDEPATH +=  /opt/ros/melodic/include
LIBS += -L/opt/ros/melodic/lib \
-lroscpp -lrospack -lpthread -lrosconsole \
    -lrosconsole_log4cxx -lrosconsole_backend_interface \
    -lxmlrpcpp -lroscpp_serialization -lrostime \
    -lcpp_common  -lroslib -lpthread -lboost_system \
    -ltf -ltf2 -ltf2_ros -ltf_conversions -lactionlib


FORMS    += mainwindow.ui

RESOURCES = cangaroo.qrc

include($$PWD/core/core.pri)
include($$PWD/driver/driver.pri)
include($$PWD/parser/dbc/dbc.pri)
include($$PWD/window/TraceWindow/TraceWindow.pri)
include($$PWD/window/SetupDialog/SetupDialog.pri)
include($$PWD/window/LogWindow/LogWindow.pri)
include($$PWD/window/GraphWindow/GraphWindow.pri)
include($$PWD/window/CanStatusWindow/CanStatusWindow.pri)
include($$PWD/window/RawTxWindow/RawTxWindow.pri)
include($$PWD/window/CmdStatusPanel/CmdStatusPanel.pri)

unix:PKGCONFIG += libnl-3.0
unix:PKGCONFIG += libnl-route-3.0
unix:include($$PWD/driver/SocketCanDriver/SocketCanDriver.pri)

win32:include($$PWD/driver/CandleApiDriver/CandleApiDriver.pri)

DISTFILES +=
