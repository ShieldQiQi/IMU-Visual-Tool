/********************************************************************************
** Form generated from reading UI file 'CmdStatusPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMDSTATUSPANEL_H
#define UI_CMDSTATUSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "../src/window/CmdStatusPanel/dial.h"

QT_BEGIN_NAMESPACE

class Ui_CmdStatusPanelWindow
{
public:
    QLabel *label_1;
    QCheckBox *checkBox_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QSlider *horizontalSlider_position;
    QLabel *label_5;
    QSlider *horizontalSlider_X;
    QLabel *label_6;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextBrowser *ErrMessage;
    QLabel *label_10;
    QCheckBox *checkBox_11;
    QSlider *horizontalSlider_velocity;
    QLabel *label_11;
    Dial *dial;

    void setupUi(QWidget *CmdStatusPanelWindow)
    {
        if (CmdStatusPanelWindow->objectName().isEmpty())
            CmdStatusPanelWindow->setObjectName(QString::fromUtf8("CmdStatusPanelWindow"));
        CmdStatusPanelWindow->resize(250, 700);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CmdStatusPanelWindow->sizePolicy().hasHeightForWidth());
        CmdStatusPanelWindow->setSizePolicy(sizePolicy);
        CmdStatusPanelWindow->setMinimumSize(QSize(250, 700));
        CmdStatusPanelWindow->setStyleSheet(QString::fromUtf8(""));
        label_1 = new QLabel(CmdStatusPanelWindow);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(70, 11, 101, 21));
        checkBox_1 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(30, 40, 89, 21));
        label_2 = new QLabel(CmdStatusPanelWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(5, 582, 238, 111));
        label_2->setStyleSheet(QString::fromUtf8("border:3px groove gray;border-radius:8px;"));
        label_3 = new QLabel(CmdStatusPanelWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(5, 5, 238, 571));
        label_3->setStyleSheet(QString::fromUtf8("border:3px groove gray;border-radius:8px;"));
        label_4 = new QLabel(CmdStatusPanelWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 590, 111, 21));
        checkBox_2 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(130, 40, 89, 21));
        checkBox_3 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(130, 70, 89, 21));
        checkBox_4 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(30, 70, 89, 21));
        checkBox_5 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(30, 100, 89, 21));
        checkBox_6 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(130, 100, 89, 21));
        checkBox_7 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(30, 130, 89, 21));
        checkBox_8 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(130, 130, 89, 21));
        horizontalSlider_position = new QSlider(CmdStatusPanelWindow);
        horizontalSlider_position->setObjectName(QString::fromUtf8("horizontalSlider_position"));
        horizontalSlider_position->setGeometry(QRect(30, 250, 181, 18));
        horizontalSlider_position->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(CmdStatusPanelWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 230, 201, 16));
        horizontalSlider_X = new QSlider(CmdStatusPanelWindow);
        horizontalSlider_X->setObjectName(QString::fromUtf8("horizontalSlider_X"));
        horizontalSlider_X->setGeometry(QRect(30, 550, 181, 18));
        horizontalSlider_X->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(CmdStatusPanelWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 530, 201, 16));
        checkBox_9 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(30, 190, 201, 21));
        checkBox_10 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(30, 500, 201, 21));
        label_7 = new QLabel(CmdStatusPanelWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 620, 68, 21));
        label_7->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 0, 0);"));
        label_8 = new QLabel(CmdStatusPanelWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 620, 68, 21));
        label_8->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 255, 0);"));
        label_9 = new QLabel(CmdStatusPanelWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(160, 620, 68, 21));
        label_9->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 255, 0);"));
        ErrMessage = new QTextBrowser(CmdStatusPanelWindow);
        ErrMessage->setObjectName(QString::fromUtf8("ErrMessage"));
        ErrMessage->setGeometry(QRect(60, 650, 168, 31));
        label_10 = new QLabel(CmdStatusPanelWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 650, 31, 31));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/assets/warning_green.png);"));
        checkBox_11 = new QCheckBox(CmdStatusPanelWindow);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(30, 160, 201, 21));
        horizontalSlider_velocity = new QSlider(CmdStatusPanelWindow);
        horizontalSlider_velocity->setObjectName(QString::fromUtf8("horizontalSlider_velocity"));
        horizontalSlider_velocity->setGeometry(QRect(30, 290, 181, 18));
        horizontalSlider_velocity->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(CmdStatusPanelWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 270, 191, 16));
        dial = new Dial(CmdStatusPanelWindow);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(21, 300, 206, 204));
        dial->setStyleSheet(QString::fromUtf8("image: url(:/assets/background.png);"));
        label_3->raise();
        label_2->raise();
        label_1->raise();
        checkBox_1->raise();
        label_4->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        checkBox_4->raise();
        checkBox_5->raise();
        checkBox_6->raise();
        checkBox_7->raise();
        checkBox_8->raise();
        horizontalSlider_position->raise();
        label_5->raise();
        horizontalSlider_X->raise();
        label_6->raise();
        checkBox_9->raise();
        checkBox_10->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        ErrMessage->raise();
        checkBox_11->raise();
        horizontalSlider_velocity->raise();
        label_11->raise();
        label_10->raise();
        dial->raise();

        retranslateUi(CmdStatusPanelWindow);

        QMetaObject::connectSlotsByName(CmdStatusPanelWindow);
    } // setupUi

    void retranslateUi(QWidget *CmdStatusPanelWindow)
    {
        CmdStatusPanelWindow->setWindowTitle(QCoreApplication::translate("CmdStatusPanelWindow", "Raw Transmit", nullptr));
        label_1->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Command Panel", nullptr));
        checkBox_1->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Tar_Pos", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Status Panel", nullptr));
        checkBox_2->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Actu_Pos", nullptr));
        checkBox_3->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Actu_Vel", nullptr));
        checkBox_4->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Tar_Vel", nullptr));
        checkBox_5->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Tar_Iq", nullptr));
        checkBox_6->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Actu_Iq", nullptr));
        checkBox_7->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Tar_Id", nullptr));
        checkBox_8->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Actu_Id", nullptr));
        label_5->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Set  the  Tar   Position", nullptr));
        label_6->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Set    the  Axis-X  Range", nullptr));
        checkBox_9->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Check  for  Pos  Mode", nullptr));
        checkBox_10->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Check for dynamic Mode", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        ErrMessage->setHtml(QCoreApplication::translate("CmdStatusPanelWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">Everything OK!</span></p></body></html>", nullptr));
        label_10->setText(QString());
        checkBox_11->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Check for Manual Mode", nullptr));
        label_11->setText(QCoreApplication::translate("CmdStatusPanelWindow", "Set  the  Tar   Velocity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CmdStatusPanelWindow: public Ui_CmdStatusPanelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMDSTATUSPANEL_H
