/********************************************************************************
** Form generated from reading UI file 'viewprocessusefiles.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPROCESSUSEFILES_H
#define UI_VIEWPROCESSUSEFILES_H

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

class Ui_viewProcessUseFiles
{
public:
    QWidget *dockWidgetContents;
    QTextBrowser *filelist;
    QLineEdit *pid;
    QLabel *label;
    QPushButton *show;

    void setupUi(QDockWidget *viewProcessUseFiles)
    {
        if (viewProcessUseFiles->objectName().isEmpty())
            viewProcessUseFiles->setObjectName(QStringLiteral("viewProcessUseFiles"));
        viewProcessUseFiles->resize(615, 526);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        filelist = new QTextBrowser(dockWidgetContents);
        filelist->setObjectName(QStringLiteral("filelist"));
        filelist->setGeometry(QRect(10, 110, 591, 371));
        pid = new QLineEdit(dockWidgetContents);
        pid->setObjectName(QStringLiteral("pid"));
        pid->setGeometry(QRect(190, 50, 113, 31));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 81, 31));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        show = new QPushButton(dockWidgetContents);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(340, 50, 101, 31));
        viewProcessUseFiles->setWidget(dockWidgetContents);

        retranslateUi(viewProcessUseFiles);

        QMetaObject::connectSlotsByName(viewProcessUseFiles);
    } // setupUi

    void retranslateUi(QDockWidget *viewProcessUseFiles)
    {
        viewProcessUseFiles->setWindowTitle(QApplication::translate("viewProcessUseFiles", "DockWidget", Q_NULLPTR));
        label->setText(QApplication::translate("viewProcessUseFiles", "input pid :", Q_NULLPTR));
        show->setText(QApplication::translate("viewProcessUseFiles", "show", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class viewProcessUseFiles: public Ui_viewProcessUseFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPROCESSUSEFILES_H
