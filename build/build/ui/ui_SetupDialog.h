/********************************************************************************
** Form generated from reading UI file 'SetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPDIALOG_H
#define UI_SETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeView;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btAddNetwork;
    QPushButton *btRemoveNetwork;
    QStackedWidget *stackedWidget;
    QWidget *emptyPage;
    QWidget *networkPage;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *edNetworkName;
    QWidget *interfacesPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTreeView *interfacesTreeView;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btAddInterface;
    QPushButton *btRemoveInterface;
    QWidget *candbsPage;
    QVBoxLayout *verticalLayout_4;
    QTreeView *candbsTreeView;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btAddDatabase;
    QPushButton *btRemoveDatabase;
    QPushButton *btReloadDatabases;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetupDialog)
    {
        if (SetupDialog->objectName().isEmpty())
            SetupDialog->setObjectName(QString::fromUtf8("SetupDialog"));
        SetupDialog->resize(1036, 835);
        verticalLayout = new QVBoxLayout(SetupDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(SetupDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget_4 = new QWidget(splitter);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(widget_4);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView->setSelectionMode(QAbstractItemView::SingleSelection);
        treeView->setUniformRowHeights(true);
        treeView->header()->setVisible(false);

        verticalLayout_2->addWidget(treeView);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btAddNetwork = new QPushButton(widget_5);
        btAddNetwork->setObjectName(QString::fromUtf8("btAddNetwork"));

        horizontalLayout_3->addWidget(btAddNetwork);

        btRemoveNetwork = new QPushButton(widget_5);
        btRemoveNetwork->setObjectName(QString::fromUtf8("btRemoveNetwork"));

        horizontalLayout_3->addWidget(btRemoveNetwork);


        verticalLayout_2->addWidget(widget_5);

        splitter->addWidget(widget_4);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        emptyPage = new QWidget();
        emptyPage->setObjectName(QString::fromUtf8("emptyPage"));
        stackedWidget->addWidget(emptyPage);
        networkPage = new QWidget();
        networkPage->setObjectName(QString::fromUtf8("networkPage"));
        formLayout = new QFormLayout(networkPage);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(networkPage);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        edNetworkName = new QLineEdit(networkPage);
        edNetworkName->setObjectName(QString::fromUtf8("edNetworkName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edNetworkName);

        stackedWidget->addWidget(networkPage);
        interfacesPage = new QWidget();
        interfacesPage->setObjectName(QString::fromUtf8("interfacesPage"));
        verticalLayout_3 = new QVBoxLayout(interfacesPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(interfacesPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        interfacesTreeView = new QTreeView(interfacesPage);
        interfacesTreeView->setObjectName(QString::fromUtf8("interfacesTreeView"));

        verticalLayout_3->addWidget(interfacesTreeView);

        widget_2 = new QWidget(interfacesPage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btAddInterface = new QPushButton(widget_2);
        btAddInterface->setObjectName(QString::fromUtf8("btAddInterface"));

        horizontalLayout->addWidget(btAddInterface);

        btRemoveInterface = new QPushButton(widget_2);
        btRemoveInterface->setObjectName(QString::fromUtf8("btRemoveInterface"));

        horizontalLayout->addWidget(btRemoveInterface);


        verticalLayout_3->addWidget(widget_2);

        stackedWidget->addWidget(interfacesPage);
        candbsPage = new QWidget();
        candbsPage->setObjectName(QString::fromUtf8("candbsPage"));
        verticalLayout_4 = new QVBoxLayout(candbsPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        candbsTreeView = new QTreeView(candbsPage);
        candbsTreeView->setObjectName(QString::fromUtf8("candbsTreeView"));
        candbsTreeView->setAlternatingRowColors(false);
        candbsTreeView->setUniformRowHeights(false);

        verticalLayout_4->addWidget(candbsTreeView);

        widget_3 = new QWidget(candbsPage);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btAddDatabase = new QPushButton(widget_3);
        btAddDatabase->setObjectName(QString::fromUtf8("btAddDatabase"));

        horizontalLayout_2->addWidget(btAddDatabase);

        btRemoveDatabase = new QPushButton(widget_3);
        btRemoveDatabase->setObjectName(QString::fromUtf8("btRemoveDatabase"));

        horizontalLayout_2->addWidget(btRemoveDatabase);

        btReloadDatabases = new QPushButton(widget_3);
        btReloadDatabases->setObjectName(QString::fromUtf8("btReloadDatabases"));

        horizontalLayout_2->addWidget(btReloadDatabases);


        verticalLayout_4->addWidget(widget_3);

        stackedWidget->addWidget(candbsPage);
        splitter->addWidget(stackedWidget);

        verticalLayout_5->addWidget(splitter);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(SetupDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SetupDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetupDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetupDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SetupDialog);
    } // setupUi

    void retranslateUi(QDialog *SetupDialog)
    {
        SetupDialog->setWindowTitle(QCoreApplication::translate("SetupDialog", "Measurement Setup", nullptr));
        btAddNetwork->setText(QCoreApplication::translate("SetupDialog", "Add Network...", nullptr));
        btRemoveNetwork->setText(QCoreApplication::translate("SetupDialog", "Remove Network", nullptr));
        label->setText(QCoreApplication::translate("SetupDialog", "Network name:", nullptr));
        label_2->setText(QCoreApplication::translate("SetupDialog", "CAN interfaces assigned to this network:", nullptr));
        btAddInterface->setText(QCoreApplication::translate("SetupDialog", "Add &Interface...", nullptr));
        btRemoveInterface->setText(QCoreApplication::translate("SetupDialog", "&Remove Interface", nullptr));
        btAddDatabase->setText(QCoreApplication::translate("SetupDialog", "Add &Database...", nullptr));
        btRemoveDatabase->setText(QCoreApplication::translate("SetupDialog", "&Remove Database", nullptr));
        btReloadDatabases->setText(QCoreApplication::translate("SetupDialog", "Reload Databases", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupDialog: public Ui_SetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPDIALOG_H
