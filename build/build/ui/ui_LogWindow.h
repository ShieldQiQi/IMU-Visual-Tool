/********************************************************************************
** Form generated from reading UI file 'LogWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWINDOW_H
#define UI_LOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;

    void setupUi(QWidget *LogWindow)
    {
        if (LogWindow->objectName().isEmpty())
            LogWindow->setObjectName(QString::fromUtf8("LogWindow"));
        LogWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(LogWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(LogWindow);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setEnabled(true);
        treeView->setMinimumSize(QSize(100, 0));

        verticalLayout->addWidget(treeView);


        retranslateUi(LogWindow);

        QMetaObject::connectSlotsByName(LogWindow);
    } // setupUi

    void retranslateUi(QWidget *LogWindow)
    {
        LogWindow->setWindowTitle(QCoreApplication::translate("LogWindow", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogWindow: public Ui_LogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWINDOW_H
