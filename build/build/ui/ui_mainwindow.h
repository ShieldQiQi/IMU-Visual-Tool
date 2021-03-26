/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_Trace_View;
    QAction *actionLog_View;
    QAction *actionSetup;
    QAction *actionStart_Measurement;
    QAction *actionStop_Measurement;
    QAction *actionAbout;
    QAction *actionSave_Trace_to_file;
    QAction *actionGraph_View;
    QAction *action_WorkspaceNew;
    QAction *action_WorkspaceSave;
    QAction *action_WorkspaceSaveAs;
    QAction *action_WorkspaceOpen;
    QAction *action_TraceClear;
    QAction *actionCan_Status_View;
    QAction *actionGraph_View_2;
    QAction *actionTransmit_View;
    QAction *actionCmdStatusPanel_View;
    QAction *actionYes_U_finally_find_me;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *mainTabs;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QMenu *menu_New;
    QMenu *menuMeasurement;
    QMenu *menuHelp;
    QMenu *menu_Trace;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 994);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDocumentMode(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Trace_View = new QAction(MainWindow);
        action_Trace_View->setObjectName(QString::fromUtf8("action_Trace_View"));
        actionLog_View = new QAction(MainWindow);
        actionLog_View->setObjectName(QString::fromUtf8("actionLog_View"));
        actionSetup = new QAction(MainWindow);
        actionSetup->setObjectName(QString::fromUtf8("actionSetup"));
        actionStart_Measurement = new QAction(MainWindow);
        actionStart_Measurement->setObjectName(QString::fromUtf8("actionStart_Measurement"));
        actionStop_Measurement = new QAction(MainWindow);
        actionStop_Measurement->setObjectName(QString::fromUtf8("actionStop_Measurement"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSave_Trace_to_file = new QAction(MainWindow);
        actionSave_Trace_to_file->setObjectName(QString::fromUtf8("actionSave_Trace_to_file"));
        actionGraph_View = new QAction(MainWindow);
        actionGraph_View->setObjectName(QString::fromUtf8("actionGraph_View"));
        actionGraph_View->setEnabled(false);
        actionGraph_View->setVisible(false);
        action_WorkspaceNew = new QAction(MainWindow);
        action_WorkspaceNew->setObjectName(QString::fromUtf8("action_WorkspaceNew"));
        action_WorkspaceSave = new QAction(MainWindow);
        action_WorkspaceSave->setObjectName(QString::fromUtf8("action_WorkspaceSave"));
        action_WorkspaceSaveAs = new QAction(MainWindow);
        action_WorkspaceSaveAs->setObjectName(QString::fromUtf8("action_WorkspaceSaveAs"));
        action_WorkspaceOpen = new QAction(MainWindow);
        action_WorkspaceOpen->setObjectName(QString::fromUtf8("action_WorkspaceOpen"));
        action_TraceClear = new QAction(MainWindow);
        action_TraceClear->setObjectName(QString::fromUtf8("action_TraceClear"));
        actionCan_Status_View = new QAction(MainWindow);
        actionCan_Status_View->setObjectName(QString::fromUtf8("actionCan_Status_View"));
        actionGraph_View_2 = new QAction(MainWindow);
        actionGraph_View_2->setObjectName(QString::fromUtf8("actionGraph_View_2"));
        actionTransmit_View = new QAction(MainWindow);
        actionTransmit_View->setObjectName(QString::fromUtf8("actionTransmit_View"));
        actionCmdStatusPanel_View = new QAction(MainWindow);
        actionCmdStatusPanel_View->setObjectName(QString::fromUtf8("actionCmdStatusPanel_View"));
        actionYes_U_finally_find_me = new QAction(MainWindow);
        actionYes_U_finally_find_me->setObjectName(QString::fromUtf8("actionYes_U_finally_find_me"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainTabs = new QTabWidget(centralwidget);
        mainTabs->setObjectName(QString::fromUtf8("mainTabs"));
        mainTabs->setEnabled(true);
        mainTabs->setAutoFillBackground(false);
        mainTabs->setTabPosition(QTabWidget::South);
        mainTabs->setTabShape(QTabWidget::Rounded);
        mainTabs->setElideMode(Qt::ElideNone);
        mainTabs->setTabsClosable(false);
        mainTabs->setMovable(true);

        verticalLayout->addWidget(mainTabs);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menu_New = new QMenu(menuWindow);
        menu_New->setObjectName(QString::fromUtf8("menu_New"));
        menuMeasurement = new QMenu(menubar);
        menuMeasurement->setObjectName(QString::fromUtf8("menuMeasurement"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menu_Trace = new QMenu(menubar);
        menu_Trace->setObjectName(QString::fromUtf8("menu_Trace"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMeasurement->menuAction());
        menubar->addAction(menu_Trace->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_WorkspaceNew);
        menuFile->addSeparator();
        menuFile->addAction(action_WorkspaceOpen);
        menuFile->addAction(action_WorkspaceSave);
        menuFile->addAction(action_WorkspaceSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(action_Quit);
        menuWindow->addAction(menu_New->menuAction());
        menu_New->addAction(action_Trace_View);
        menu_New->addAction(actionLog_View);
        menu_New->addAction(actionGraph_View);
        menu_New->addAction(actionCan_Status_View);
        menu_New->addAction(actionGraph_View_2);
        menu_New->addAction(actionTransmit_View);
        menu_New->addAction(actionCmdStatusPanel_View);
        menu_New->addAction(actionYes_U_finally_find_me);
        menuMeasurement->addAction(actionStart_Measurement);
        menuMeasurement->addAction(actionStop_Measurement);
        menuMeasurement->addSeparator();
        menuMeasurement->addAction(actionSetup);
        menuHelp->addAction(actionAbout);
        menu_Trace->addAction(action_TraceClear);
        menu_Trace->addSeparator();
        menu_Trace->addAction(actionSave_Trace_to_file);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        mainTabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "IMU-Visual-Tool", nullptr));
        action_Quit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        action_Quit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Trace_View->setText(QCoreApplication::translate("MainWindow", "&Trace View", nullptr));
#if QT_CONFIG(shortcut)
        action_Trace_View->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLog_View->setText(QCoreApplication::translate("MainWindow", "&Log View", nullptr));
#if QT_CONFIG(shortcut)
        actionLog_View->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetup->setText(QCoreApplication::translate("MainWindow", "&Setup...", nullptr));
#if QT_CONFIG(shortcut)
        actionSetup->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStart_Measurement->setText(QCoreApplication::translate("MainWindow", "Star&t Measurement", nullptr));
#if QT_CONFIG(shortcut)
        actionStart_Measurement->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop_Measurement->setText(QCoreApplication::translate("MainWindow", "Sto&p Measurement", nullptr));
#if QT_CONFIG(shortcut)
        actionStop_Measurement->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionSave_Trace_to_file->setText(QCoreApplication::translate("MainWindow", "&Save Trace to file...", nullptr));
        actionGraph_View->setText(QCoreApplication::translate("MainWindow", "&Graph View", nullptr));
#if QT_CONFIG(shortcut)
        actionGraph_View->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+G", nullptr));
#endif // QT_CONFIG(shortcut)
        action_WorkspaceNew->setText(QCoreApplication::translate("MainWindow", "&New Workspace...", nullptr));
#if QT_CONFIG(shortcut)
        action_WorkspaceNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_WorkspaceSave->setText(QCoreApplication::translate("MainWindow", "&Save Workspace", nullptr));
#if QT_CONFIG(shortcut)
        action_WorkspaceSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_WorkspaceSaveAs->setText(QCoreApplication::translate("MainWindow", "Save Workspace &As...", nullptr));
#if QT_CONFIG(shortcut)
        action_WorkspaceSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_WorkspaceOpen->setText(QCoreApplication::translate("MainWindow", "&Open Workspace...", nullptr));
#if QT_CONFIG(shortcut)
        action_WorkspaceOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_TraceClear->setText(QCoreApplication::translate("MainWindow", "&Clear", nullptr));
#if QT_CONFIG(shortcut)
        action_TraceClear->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCan_Status_View->setText(QCoreApplication::translate("MainWindow", "Can &Status View", nullptr));
        actionGraph_View_2->setText(QCoreApplication::translate("MainWindow", "Graph View", nullptr));
        actionTransmit_View->setText(QCoreApplication::translate("MainWindow", "Transmit View", nullptr));
        actionCmdStatusPanel_View->setText(QCoreApplication::translate("MainWindow", "CmdStatusPanel View", nullptr));
        actionYes_U_finally_find_me->setText(QCoreApplication::translate("MainWindow", "Yes! U finally find me!", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "&Window", nullptr));
        menu_New->setTitle(QCoreApplication::translate("MainWindow", "&New", nullptr));
        menuMeasurement->setTitle(QCoreApplication::translate("MainWindow", "&Measurement", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_Trace->setTitle(QCoreApplication::translate("MainWindow", "&Trace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
