#include "killprocess.h"
#include "ui_killprocess.h"
#include <QDebug>
#include <QMessageBox>
killprocess::killprocess(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::killprocess)
{
    ui->setupUi(this);
}

killprocess::~killprocess()
{
    delete ui;
}

void killprocess::on_inputpid_clicked()
{

    QString pid=ui->textEdit_inputpid->toPlainText();
    QString Qcmd="kill -9 ";
    Qcmd+=pid;
    QByteArray ba = Qcmd.toLatin1();
    char *cmd = ba.data();
    qDebug()<<cmd;
    int ret=0;
    ret = system(cmd);
    if(ret==0)
        QMessageBox::information(NULL, "Tips", "success");
    else
       QMessageBox::information(NULL, "Tips", "No such process");
    ui->exit->click();
}
