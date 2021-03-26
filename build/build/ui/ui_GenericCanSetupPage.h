/********************************************************************************
** Form generated from reading UI file 'GenericCanSetupPage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERICCANSETUPPAGE_H
#define UI_GENERICCANSETUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenericCanSetupPage
{
public:
    QLabel *label;
    QLabel *laDriver;
    QLabel *label_3;
    QLabel *laInterface;
    QLabel *label_5;
    QLabel *laInterfaceDetails;
    QLabel *label_7;
    QComboBox *cbBitrate;
    QLabel *label_8;
    QComboBox *cbSamplePoint;
    QLabel *label_9;
    QComboBox *cbBitrateFD;
    QLabel *label_10;
    QComboBox *cbSamplePointFD;
    QLabel *label_11;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vbOptions;
    QCheckBox *cbConfigOS;
    QCheckBox *cbListenOnly;
    QCheckBox *cbOneShot;
    QCheckBox *cbLoopBack;
    QCheckBox *cbTripleSampling;
    QCheckBox *cbAutoRestart;

    void setupUi(QWidget *GenericCanSetupPage)
    {
        if (GenericCanSetupPage->objectName().isEmpty())
            GenericCanSetupPage->setObjectName(QString::fromUtf8("GenericCanSetupPage"));
        GenericCanSetupPage->resize(795, 633);
        label = new QLabel(GenericCanSetupPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 66, 16));
        laDriver = new QLabel(GenericCanSetupPage);
        laDriver->setObjectName(QString::fromUtf8("laDriver"));
        laDriver->setGeometry(QRect(140, 9, 610, 16));
        label_3 = new QLabel(GenericCanSetupPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(9, 28, 82, 16));
        laInterface = new QLabel(GenericCanSetupPage);
        laInterface->setObjectName(QString::fromUtf8("laInterface"));
        laInterface->setGeometry(QRect(140, 28, 610, 16));
        label_5 = new QLabel(GenericCanSetupPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(9, 47, 117, 16));
        laInterfaceDetails = new QLabel(GenericCanSetupPage);
        laInterfaceDetails->setObjectName(QString::fromUtf8("laInterfaceDetails"));
        laInterfaceDetails->setGeometry(QRect(140, 47, 610, 16));
        label_7 = new QLabel(GenericCanSetupPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(9, 84, 69, 16));
        cbBitrate = new QComboBox(GenericCanSetupPage);
        cbBitrate->setObjectName(QString::fromUtf8("cbBitrate"));
        cbBitrate->setGeometry(QRect(140, 84, 170, 20));
        label_8 = new QLabel(GenericCanSetupPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(9, 110, 98, 16));
        cbSamplePoint = new QComboBox(GenericCanSetupPage);
        cbSamplePoint->setObjectName(QString::fromUtf8("cbSamplePoint"));
        cbSamplePoint->setGeometry(QRect(140, 110, 170, 20));
        label_9 = new QLabel(GenericCanSetupPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(9, 150, 104, 16));
        cbBitrateFD = new QComboBox(GenericCanSetupPage);
        cbBitrateFD->setObjectName(QString::fromUtf8("cbBitrateFD"));
        cbBitrateFD->setGeometry(QRect(140, 150, 170, 20));
        label_10 = new QLabel(GenericCanSetupPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(9, 176, 130, 16));
        cbSamplePointFD = new QComboBox(GenericCanSetupPage);
        cbSamplePointFD->setObjectName(QString::fromUtf8("cbSamplePointFD"));
        cbSamplePointFD->setGeometry(QRect(140, 176, 170, 20));
        label_11 = new QLabel(GenericCanSetupPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(9, 220, 41, 16));
        verticalLayoutWidget = new QWidget(GenericCanSetupPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 220, 411, 158));
        vbOptions = new QVBoxLayout(verticalLayoutWidget);
        vbOptions->setObjectName(QString::fromUtf8("vbOptions"));
        vbOptions->setContentsMargins(0, 0, 0, 0);
        cbConfigOS = new QCheckBox(verticalLayoutWidget);
        cbConfigOS->setObjectName(QString::fromUtf8("cbConfigOS"));

        vbOptions->addWidget(cbConfigOS);

        cbListenOnly = new QCheckBox(verticalLayoutWidget);
        cbListenOnly->setObjectName(QString::fromUtf8("cbListenOnly"));

        vbOptions->addWidget(cbListenOnly);

        cbOneShot = new QCheckBox(verticalLayoutWidget);
        cbOneShot->setObjectName(QString::fromUtf8("cbOneShot"));

        vbOptions->addWidget(cbOneShot);

        cbLoopBack = new QCheckBox(verticalLayoutWidget);
        cbLoopBack->setObjectName(QString::fromUtf8("cbLoopBack"));

        vbOptions->addWidget(cbLoopBack);

        cbTripleSampling = new QCheckBox(verticalLayoutWidget);
        cbTripleSampling->setObjectName(QString::fromUtf8("cbTripleSampling"));

        vbOptions->addWidget(cbTripleSampling);

        cbAutoRestart = new QCheckBox(verticalLayoutWidget);
        cbAutoRestart->setObjectName(QString::fromUtf8("cbAutoRestart"));

        vbOptions->addWidget(cbAutoRestart);


        retranslateUi(GenericCanSetupPage);

        QMetaObject::connectSlotsByName(GenericCanSetupPage);
    } // setupUi

    void retranslateUi(QWidget *GenericCanSetupPage)
    {
        GenericCanSetupPage->setWindowTitle(QCoreApplication::translate("GenericCanSetupPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("GenericCanSetupPage", "Driver:", nullptr));
        laDriver->setText(QCoreApplication::translate("GenericCanSetupPage", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("GenericCanSetupPage", "Interface:", nullptr));
        laInterface->setText(QCoreApplication::translate("GenericCanSetupPage", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("GenericCanSetupPage", "Interface Details:", nullptr));
        laInterfaceDetails->setText(QCoreApplication::translate("GenericCanSetupPage", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("GenericCanSetupPage", "Bitrate:", nullptr));
        label_8->setText(QCoreApplication::translate("GenericCanSetupPage", "Sample Point:", nullptr));
        label_9->setText(QCoreApplication::translate("GenericCanSetupPage", "CanFD Bitrate:", nullptr));
        label_10->setText(QCoreApplication::translate("GenericCanSetupPage", "CanFD SamplePoint:", nullptr));
        label_11->setText(QCoreApplication::translate("GenericCanSetupPage", "Options:", nullptr));
        cbConfigOS->setText(QCoreApplication::translate("GenericCanSetupPage", "configured by operating system", nullptr));
        cbListenOnly->setText(QCoreApplication::translate("GenericCanSetupPage", "Listen only mode", nullptr));
        cbOneShot->setText(QCoreApplication::translate("GenericCanSetupPage", "One-Shot mode", nullptr));
        cbLoopBack->setText(QCoreApplication::translate("GenericCanSetupPage", "Loop Back mode", nullptr));
        cbTripleSampling->setText(QCoreApplication::translate("GenericCanSetupPage", "Triple Sampling", nullptr));
        cbAutoRestart->setText(QCoreApplication::translate("GenericCanSetupPage", "Auto-Restart on bus off condition", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenericCanSetupPage: public Ui_GenericCanSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERICCANSETUPPAGE_H
