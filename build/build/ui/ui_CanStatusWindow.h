/********************************************************************************
** Form generated from reading UI file 'CanStatusWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANSTATUSWINDOW_H
#define UI_CANSTATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CanStatusWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *CanStatusWindow)
    {
        if (CanStatusWindow->objectName().isEmpty())
            CanStatusWindow->setObjectName(QString::fromUtf8("CanStatusWindow"));
        CanStatusWindow->resize(756, 459);
        verticalLayout = new QVBoxLayout(CanStatusWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        treeWidget = new QTreeWidget(CanStatusWindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(12, QString::fromUtf8("13"));
        __qtreewidgetitem->setText(11, QString::fromUtf8("12"));
        __qtreewidgetitem->setText(10, QString::fromUtf8("11"));
        __qtreewidgetitem->setText(9, QString::fromUtf8("10"));
        __qtreewidgetitem->setText(8, QString::fromUtf8("9"));
        __qtreewidgetitem->setText(7, QString::fromUtf8("8"));
        __qtreewidgetitem->setText(6, QString::fromUtf8("7"));
        __qtreewidgetitem->setText(5, QString::fromUtf8("6"));
        __qtreewidgetitem->setText(4, QString::fromUtf8("5"));
        __qtreewidgetitem->setText(3, QString::fromUtf8("4"));
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setIndentation(0);
        treeWidget->setItemsExpandable(false);
        treeWidget->setColumnCount(13);
        treeWidget->header()->setDefaultSectionSize(80);

        verticalLayout->addWidget(treeWidget);


        retranslateUi(CanStatusWindow);

        QMetaObject::connectSlotsByName(CanStatusWindow);
    } // setupUi

    void retranslateUi(QWidget *CanStatusWindow)
    {
        CanStatusWindow->setWindowTitle(QCoreApplication::translate("CanStatusWindow", "Can Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CanStatusWindow: public Ui_CanStatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANSTATUSWINDOW_H
