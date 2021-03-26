/********************************************************************************
** Form generated from reading UI file 'GraphWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName(QString::fromUtf8("GraphWindow"));
        GraphWindow->resize(1500, 720);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphWindow->sizePolicy().hasHeightForWidth());
        GraphWindow->setSizePolicy(sizePolicy);
        GraphWindow->setMinimumSize(QSize(300, 690));
        GraphWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(GraphWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QWidget *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
