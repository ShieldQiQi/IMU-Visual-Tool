/********************************************************************************
** Form generated from reading UI file 'SelectCanInterfacesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCANINTERFACESDIALOG_H
#define UI_SELECTCANINTERFACESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectCanInterfacesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectCanInterfacesDialog)
    {
        if (SelectCanInterfacesDialog->objectName().isEmpty())
            SelectCanInterfacesDialog->setObjectName(QString::fromUtf8("SelectCanInterfacesDialog"));
        SelectCanInterfacesDialog->resize(570, 438);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/cangaroo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectCanInterfacesDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SelectCanInterfacesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(SelectCanInterfacesDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setIndentation(0);
        treeWidget->setColumnCount(3);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout_2->addWidget(treeWidget);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(SelectCanInterfacesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectCanInterfacesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectCanInterfacesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectCanInterfacesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectCanInterfacesDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectCanInterfacesDialog)
    {
        SelectCanInterfacesDialog->setWindowTitle(QCoreApplication::translate("SelectCanInterfacesDialog", "Select CAN Interface(s)", nullptr));
        pushButton->setText(QCoreApplication::translate("SelectCanInterfacesDialog", "&Create Interface...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectCanInterfacesDialog: public Ui_SelectCanInterfacesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCANINTERFACESDIALOG_H
