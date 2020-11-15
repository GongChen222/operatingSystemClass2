/********************************************************************************
** Form generated from reading UI file 'viewfileusebyprocesss.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFILEUSEBYPROCESSS_H
#define UI_VIEWFILEUSEBYPROCESSS_H

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

class Ui_viewfileusebyprocesss
{
public:
    QWidget *dockWidgetContents;
    QTextBrowser *processlist;
    QLabel *label;
    QLineEdit *filename;
    QPushButton *show;

    void setupUi(QDockWidget *viewfileusebyprocesss)
    {
        if (viewfileusebyprocesss->objectName().isEmpty())
            viewfileusebyprocesss->setObjectName(QStringLiteral("viewfileusebyprocesss"));
        viewfileusebyprocesss->resize(587, 512);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        processlist = new QTextBrowser(dockWidgetContents);
        processlist->setObjectName(QStringLiteral("processlist"));
        processlist->setGeometry(QRect(10, 120, 561, 361));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 171, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        filename = new QLineEdit(dockWidgetContents);
        filename->setObjectName(QStringLiteral("filename"));
        filename->setGeometry(QRect(180, 50, 131, 31));
        show = new QPushButton(dockWidgetContents);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(360, 50, 89, 31));
        QFont font1;
        font1.setPointSize(13);
        show->setFont(font1);
        viewfileusebyprocesss->setWidget(dockWidgetContents);

        retranslateUi(viewfileusebyprocesss);

        QMetaObject::connectSlotsByName(viewfileusebyprocesss);
    } // setupUi

    void retranslateUi(QDockWidget *viewfileusebyprocesss)
    {
        viewfileusebyprocesss->setWindowTitle(QApplication::translate("viewfileusebyprocesss", "DockWidget", Q_NULLPTR));
        label->setText(QApplication::translate("viewfileusebyprocesss", "input file name:", Q_NULLPTR));
        show->setText(QApplication::translate("viewfileusebyprocesss", "show", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class viewfileusebyprocesss: public Ui_viewfileusebyprocesss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFILEUSEBYPROCESSS_H
