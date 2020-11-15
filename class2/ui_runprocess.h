/********************************************************************************
** Form generated from reading UI file 'runprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNPROCESS_H
#define UI_RUNPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_runprocess
{
public:
    QWidget *dockWidgetContents;
    QPushButton *input;
    QPushButton *exit;
    QLineEdit *inputcmd;
    QLabel *label;

    void setupUi(QDockWidget *runprocess)
    {
        if (runprocess->objectName().isEmpty())
            runprocess->setObjectName(QStringLiteral("runprocess"));
        runprocess->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        input = new QPushButton(dockWidgetContents);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(70, 150, 89, 25));
        exit = new QPushButton(dockWidgetContents);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(200, 150, 89, 25));
        inputcmd = new QLineEdit(dockWidgetContents);
        inputcmd->setObjectName(QStringLiteral("inputcmd"));
        inputcmd->setGeometry(QRect(70, 100, 221, 25));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 50, 251, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        runprocess->setWidget(dockWidgetContents);

        retranslateUi(runprocess);
        QObject::connect(exit, SIGNAL(clicked()), runprocess, SLOT(close()));

        QMetaObject::connectSlotsByName(runprocess);
    } // setupUi

    void retranslateUi(QDockWidget *runprocess)
    {
        runprocess->setWindowTitle(QApplication::translate("runprocess", "DockWidget", Q_NULLPTR));
        input->setText(QApplication::translate("runprocess", "ok", Q_NULLPTR));
        exit->setText(QApplication::translate("runprocess", "exit", Q_NULLPTR));
        label->setText(QApplication::translate("runprocess", "\350\257\267\350\276\223\345\205\245\350\246\201\350\277\220\350\241\214\347\232\204\347\250\213\345\272\217\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class runprocess: public Ui_runprocess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNPROCESS_H
