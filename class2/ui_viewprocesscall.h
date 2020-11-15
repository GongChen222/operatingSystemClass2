/********************************************************************************
** Form generated from reading UI file 'viewprocesscall.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPROCESSCALL_H
#define UI_VIEWPROCESSCALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewprocesscall
{
public:
    QWidget *dockWidgetContents;
    QTextBrowser *calllist;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *processname;
    QPushButton *input;

    void setupUi(QDockWidget *viewprocesscall)
    {
        if (viewprocesscall->objectName().isEmpty())
            viewprocesscall->setObjectName(QStringLiteral("viewprocesscall"));
        viewprocesscall->resize(582, 485);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        calllist = new QTextBrowser(dockWidgetContents);
        calllist->setObjectName(QStringLiteral("calllist"));
        calllist->setGeometry(QRect(20, 120, 541, 331));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 161, 41));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 40, 161, 31));
        label_2->setFont(font);
        processname = new QLineEdit(dockWidgetContents);
        processname->setObjectName(QStringLiteral("processname"));
        processname->setGeometry(QRect(200, 40, 131, 31));
        input = new QPushButton(dockWidgetContents);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(390, 40, 89, 25));
        input->setFont(font);
        viewprocesscall->setWidget(dockWidgetContents);

        retranslateUi(viewprocesscall);

        QMetaObject::connectSlotsByName(viewprocesscall);
    } // setupUi

    void retranslateUi(QDockWidget *viewprocesscall)
    {
        viewprocesscall->setWindowTitle(QApplication::translate("viewprocesscall", "DockWidget", Q_NULLPTR));
        label->setText(QApplication::translate("viewprocesscall", "system call list:", Q_NULLPTR));
        label_2->setText(QApplication::translate("viewprocesscall", "input process name:", Q_NULLPTR));
        input->setText(QApplication::translate("viewprocesscall", "input", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class viewprocesscall: public Ui_viewprocesscall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPROCESSCALL_H
