/********************************************************************************
** Form generated from reading UI file 'TraceWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEWINDOW_H
#define UI_TRACEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraceWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbTimestampMode;
    QCheckBox *cbAggregated;
    QCheckBox *cbAutoScroll;
    QSpacerItem *horizontalSpacer;
    QTreeView *tree;

    void setupUi(QWidget *TraceWindow)
    {
        if (TraceWindow->objectName().isEmpty())
            TraceWindow->setObjectName(QString::fromUtf8("TraceWindow"));
        TraceWindow->resize(840, 616);
        verticalLayout = new QVBoxLayout(TraceWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(TraceWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbTimestampMode = new QComboBox(widget);
        cbTimestampMode->setObjectName(QString::fromUtf8("cbTimestampMode"));

        horizontalLayout->addWidget(cbTimestampMode);

        cbAggregated = new QCheckBox(widget);
        cbAggregated->setObjectName(QString::fromUtf8("cbAggregated"));
        cbAggregated->setChecked(false);

        horizontalLayout->addWidget(cbAggregated);

        cbAutoScroll = new QCheckBox(widget);
        cbAutoScroll->setObjectName(QString::fromUtf8("cbAutoScroll"));

        horizontalLayout->addWidget(cbAutoScroll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        tree = new QTreeView(TraceWindow);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(tree);


        retranslateUi(TraceWindow);

        QMetaObject::connectSlotsByName(TraceWindow);
    } // setupUi

    void retranslateUi(QWidget *TraceWindow)
    {
        TraceWindow->setWindowTitle(QCoreApplication::translate("TraceWindow", "Trace View", nullptr));
        label->setText(QCoreApplication::translate("TraceWindow", "Timestamps:", nullptr));
        cbAggregated->setText(QCoreApplication::translate("TraceWindow", "aggregate by ID", nullptr));
        cbAutoScroll->setText(QCoreApplication::translate("TraceWindow", "auto scroll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TraceWindow: public Ui_TraceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEWINDOW_H
