/********************************************************************************
** Form generated from reading UI file 'RawTxWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAWTXWINDOW_H
#define UI_RAWTXWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RawTxWindow
{
public:
    QPushButton *singleSendButton;
    QPushButton *repeatSendButton;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *fieldAddress;
    QLabel *label;
    QSpinBox *fieldDLC;
    QLabel *label_2;
    QLineEdit *fieldByte0;
    QLabel *label_3;
    QLineEdit *fieldByte1;
    QLineEdit *fieldByte2;
    QLineEdit *fieldByte3;
    QLineEdit *fieldByte4;
    QLineEdit *fieldByte5;
    QLineEdit *fieldByte6;
    QLineEdit *fieldByte7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QSpinBox *spinBox_RepeatRate;
    QCheckBox *checkBox_IsRTR;
    QCheckBox *checkBox_IsExtended;
    QCheckBox *checkBox_IsErrorFrame;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QWidget *RawTxWindow)
    {
        if (RawTxWindow->objectName().isEmpty())
            RawTxWindow->setObjectName(QString::fromUtf8("RawTxWindow"));
        RawTxWindow->resize(504, 180);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RawTxWindow->sizePolicy().hasHeightForWidth());
        RawTxWindow->setSizePolicy(sizePolicy);
        RawTxWindow->setMinimumSize(QSize(504, 180));
        singleSendButton = new QPushButton(RawTxWindow);
        singleSendButton->setObjectName(QString::fromUtf8("singleSendButton"));
        singleSendButton->setGeometry(QRect(380, 150, 111, 23));
        repeatSendButton = new QPushButton(RawTxWindow);
        repeatSendButton->setObjectName(QString::fromUtf8("repeatSendButton"));
        repeatSendButton->setGeometry(QRect(10, 150, 101, 23));
        repeatSendButton->setCheckable(true);
        label_11 = new QLabel(RawTxWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(190, 150, 21, 20));
        label_12 = new QLabel(RawTxWindow);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(230, 150, 151, 20));
        label_12->setTextFormat(Qt::PlainText);
        fieldAddress = new QLineEdit(RawTxWindow);
        fieldAddress->setObjectName(QString::fromUtf8("fieldAddress"));
        fieldAddress->setGeometry(QRect(10, 30, 72, 20));
        label = new QLabel(RawTxWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        fieldDLC = new QSpinBox(RawTxWindow);
        fieldDLC->setObjectName(QString::fromUtf8("fieldDLC"));
        fieldDLC->setGeometry(QRect(120, 30, 41, 20));
        fieldDLC->setMinimum(0);
        fieldDLC->setMaximum(8);
        fieldDLC->setValue(8);
        label_2 = new QLabel(RawTxWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 31, 16));
        fieldByte0 = new QLineEdit(RawTxWindow);
        fieldByte0->setObjectName(QString::fromUtf8("fieldByte0"));
        fieldByte0->setGeometry(QRect(190, 30, 21, 20));
        fieldByte0->setMaxLength(2);
        label_3 = new QLabel(RawTxWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 10, 21, 16));
        label_3->setAlignment(Qt::AlignCenter);
        fieldByte1 = new QLineEdit(RawTxWindow);
        fieldByte1->setObjectName(QString::fromUtf8("fieldByte1"));
        fieldByte1->setGeometry(QRect(220, 30, 21, 20));
        fieldByte1->setMaxLength(2);
        fieldByte2 = new QLineEdit(RawTxWindow);
        fieldByte2->setObjectName(QString::fromUtf8("fieldByte2"));
        fieldByte2->setGeometry(QRect(250, 30, 21, 20));
        fieldByte2->setMaxLength(2);
        fieldByte3 = new QLineEdit(RawTxWindow);
        fieldByte3->setObjectName(QString::fromUtf8("fieldByte3"));
        fieldByte3->setGeometry(QRect(280, 30, 21, 20));
        fieldByte3->setMaxLength(2);
        fieldByte4 = new QLineEdit(RawTxWindow);
        fieldByte4->setObjectName(QString::fromUtf8("fieldByte4"));
        fieldByte4->setGeometry(QRect(310, 30, 21, 20));
        fieldByte4->setMaxLength(2);
        fieldByte5 = new QLineEdit(RawTxWindow);
        fieldByte5->setObjectName(QString::fromUtf8("fieldByte5"));
        fieldByte5->setGeometry(QRect(340, 30, 21, 20));
        fieldByte5->setMaxLength(2);
        fieldByte6 = new QLineEdit(RawTxWindow);
        fieldByte6->setObjectName(QString::fromUtf8("fieldByte6"));
        fieldByte6->setGeometry(QRect(370, 30, 21, 20));
        fieldByte6->setMaxLength(2);
        fieldByte7 = new QLineEdit(RawTxWindow);
        fieldByte7->setObjectName(QString::fromUtf8("fieldByte7"));
        fieldByte7->setGeometry(QRect(400, 30, 21, 20));
        fieldByte7->setMaxLength(2);
        label_8 = new QLabel(RawTxWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 10, 21, 16));
        label_8->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(RawTxWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(250, 10, 21, 16));
        label_10->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(RawTxWindow);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(280, 10, 21, 16));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(RawTxWindow);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 10, 21, 16));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(RawTxWindow);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(340, 10, 21, 16));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(RawTxWindow);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(370, 10, 21, 16));
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(RawTxWindow);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(400, 10, 21, 16));
        label_17->setAlignment(Qt::AlignCenter);
        spinBox_RepeatRate = new QSpinBox(RawTxWindow);
        spinBox_RepeatRate->setObjectName(QString::fromUtf8("spinBox_RepeatRate"));
        spinBox_RepeatRate->setGeometry(QRect(120, 150, 61, 22));
        spinBox_RepeatRate->setMaximum(10000);
        spinBox_RepeatRate->setValue(1000);
        checkBox_IsRTR = new QCheckBox(RawTxWindow);
        checkBox_IsRTR->setObjectName(QString::fromUtf8("checkBox_IsRTR"));
        checkBox_IsRTR->setGeometry(QRect(120, 100, 51, 17));
        checkBox_IsExtended = new QCheckBox(RawTxWindow);
        checkBox_IsExtended->setObjectName(QString::fromUtf8("checkBox_IsExtended"));
        checkBox_IsExtended->setGeometry(QRect(10, 100, 91, 17));
        checkBox_IsErrorFrame = new QCheckBox(RawTxWindow);
        checkBox_IsErrorFrame->setObjectName(QString::fromUtf8("checkBox_IsErrorFrame"));
        checkBox_IsErrorFrame->setGeometry(QRect(190, 100, 111, 17));
        line = new QFrame(RawTxWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 70, 1500, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(RawTxWindow);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 120, 1500, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(RawTxWindow);

        QMetaObject::connectSlotsByName(RawTxWindow);
    } // setupUi

    void retranslateUi(QWidget *RawTxWindow)
    {
        RawTxWindow->setWindowTitle(QCoreApplication::translate("RawTxWindow", "Raw Transmit", nullptr));
        singleSendButton->setText(QCoreApplication::translate("RawTxWindow", "Send Single", nullptr));
        repeatSendButton->setText(QCoreApplication::translate("RawTxWindow", "Send Repeat", nullptr));
        label_11->setText(QCoreApplication::translate("RawTxWindow", "ms", nullptr));
        label_12->setText(QCoreApplication::translate("RawTxWindow", "All values are hex", nullptr));
        fieldAddress->setInputMask(QCoreApplication::translate("RawTxWindow", "hhhhhhhh", nullptr));
        fieldAddress->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        label->setText(QCoreApplication::translate("RawTxWindow", "Address", nullptr));
        label_2->setText(QCoreApplication::translate("RawTxWindow", "DLC", nullptr));
        fieldByte0->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte0->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        label_3->setText(QCoreApplication::translate("RawTxWindow", "1", nullptr));
        fieldByte1->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte1->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        fieldByte2->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte2->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        fieldByte3->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte3->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        fieldByte4->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte4->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        fieldByte5->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte5->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        fieldByte6->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte6->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        fieldByte7->setInputMask(QCoreApplication::translate("RawTxWindow", "hh", nullptr));
        fieldByte7->setText(QCoreApplication::translate("RawTxWindow", "00", nullptr));
        label_8->setText(QCoreApplication::translate("RawTxWindow", "2", nullptr));
        label_10->setText(QCoreApplication::translate("RawTxWindow", "3", nullptr));
        label_13->setText(QCoreApplication::translate("RawTxWindow", "4", nullptr));
        label_14->setText(QCoreApplication::translate("RawTxWindow", "5", nullptr));
        label_15->setText(QCoreApplication::translate("RawTxWindow", "6", nullptr));
        label_16->setText(QCoreApplication::translate("RawTxWindow", "7", nullptr));
        label_17->setText(QCoreApplication::translate("RawTxWindow", "8", nullptr));
        checkBox_IsRTR->setText(QCoreApplication::translate("RawTxWindow", "RTR", nullptr));
        checkBox_IsExtended->setText(QCoreApplication::translate("RawTxWindow", "Extended ID", nullptr));
        checkBox_IsErrorFrame->setText(QCoreApplication::translate("RawTxWindow", "Error Frame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RawTxWindow: public Ui_RawTxWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAWTXWINDOW_H
