/********************************************************************************
** Form generated from reading UI file 'killprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KILLPROCESS_H
#define UI_KILLPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_killprocess
{
public:
    QWidget *dockWidgetContents;
    QPushButton *inputpid;
    QPushButton *exit;
    QTextEdit *textEdit_inputpid;
    QLabel *label;

    void setupUi(QDockWidget *killprocess)
    {
        if (killprocess->objectName().isEmpty())
            killprocess->setObjectName(QStringLiteral("killprocess"));
        killprocess->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        inputpid = new QPushButton(dockWidgetContents);
        inputpid->setObjectName(QStringLiteral("inputpid"));
        inputpid->setGeometry(QRect(60, 180, 89, 25));
        exit = new QPushButton(dockWidgetContents);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(220, 180, 89, 25));
        textEdit_inputpid = new QTextEdit(dockWidgetContents);
        textEdit_inputpid->setObjectName(QStringLiteral("textEdit_inputpid"));
        textEdit_inputpid->setGeometry(QRect(70, 100, 241, 51));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 131, 17));
        killprocess->setWidget(dockWidgetContents);

        retranslateUi(killprocess);
        QObject::connect(exit, SIGNAL(clicked()), killprocess, SLOT(close()));

        QMetaObject::connectSlotsByName(killprocess);
    } // setupUi

    void retranslateUi(QDockWidget *killprocess)
    {
        killprocess->setWindowTitle(QApplication::translate("killprocess", "DockWidget", Q_NULLPTR));
        inputpid->setText(QApplication::translate("killprocess", "ok", Q_NULLPTR));
        exit->setText(QApplication::translate("killprocess", "exit", Q_NULLPTR));
        label->setText(QApplication::translate("killprocess", "Please input pid :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class killprocess: public Ui_killprocess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KILLPROCESS_H
