/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *create;
    QPushButton *kill;
    QPushButton *show;
    QLabel *label;
    QPushButton *exit;
    QLabel *label_2;
    QTextBrowser *processlist;
    QLabel *label_3;
    QPushButton *viewFilesByPid;
    QPushButton *viewProcessByFile;
    QPushButton *viewprocesscall;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(854, 915);
        QFont font;
        font.setPointSize(13);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        create = new QPushButton(centralWidget);
        create->setObjectName(QStringLiteral("create"));
        create->setGeometry(QRect(250, 420, 381, 51));
        QFont font1;
        font1.setPointSize(14);
        create->setFont(font1);
        kill = new QPushButton(centralWidget);
        kill->setObjectName(QStringLiteral("kill"));
        kill->setGeometry(QRect(250, 480, 381, 51));
        kill->setFont(font1);
        show = new QPushButton(centralWidget);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(250, 360, 381, 51));
        show->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 810, 241, 41));
        label->setFont(font1);
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(250, 730, 381, 51));
        exit->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 80, 191, 41));
        label_2->setFont(font1);
        processlist = new QTextBrowser(centralWidget);
        processlist->setObjectName(QStringLiteral("processlist"));
        processlist->setGeometry(QRect(120, 120, 641, 231));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 20, 351, 51));
        QFont font2;
        font2.setPointSize(35);
        label_3->setFont(font2);
        viewFilesByPid = new QPushButton(centralWidget);
        viewFilesByPid->setObjectName(QStringLiteral("viewFilesByPid"));
        viewFilesByPid->setGeometry(QRect(250, 610, 381, 51));
        viewProcessByFile = new QPushButton(centralWidget);
        viewProcessByFile->setObjectName(QStringLiteral("viewProcessByFile"));
        viewProcessByFile->setGeometry(QRect(250, 670, 381, 51));
        viewprocesscall = new QPushButton(centralWidget);
        viewprocesscall->setObjectName(QStringLiteral("viewprocesscall"));
        viewprocesscall->setGeometry(QRect(250, 544, 381, 51));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(exit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        create->setText(QApplication::translate("MainWindow", "run a process", Q_NULLPTR));
        kill->setText(QApplication::translate("MainWindow", "kill a process", Q_NULLPTR));
        show->setText(QApplication::translate("MainWindow", "show all process", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "  by:\345\256\253\346\231\250       72120204018", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "process list :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Process Manage", Q_NULLPTR));
        viewFilesByPid->setText(QApplication::translate("MainWindow", "View files opened by process", Q_NULLPTR));
        viewProcessByFile->setText(QApplication::translate("MainWindow", "See which processes use file", Q_NULLPTR));
        viewprocesscall->setText(QApplication::translate("MainWindow", "View process system call", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
