#include "runprocess.h"
#include "ui_runprocess.h"
#include <QDebug>
#include <QMessageBox>
runprocess::runprocess(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::runprocess)
{
    ui->setupUi(this);
}

runprocess::~runprocess()
{
    delete ui;
}

void runprocess::on_input_clicked(){
    QString Qcmd="gnome-terminal -e ./";
    QString QprossName=ui->inputcmd->text();
    Qcmd+= QprossName;
    QByteArray ba = Qcmd.toLatin1();
    char *cmd = ba.data();

    int ret=0;
    ret = system(cmd);
     QString Qcmd2="pidof "+QprossName;
     QByteArray ba2 = Qcmd2.toLatin1();
     char *cmd2 = ba2.data();
     qDebug()<<cmd2;
     FILE *fstream=NULL;
     char buff[1024];
     memset(buff,0,sizeof(buff));
     fstream=popen(cmd2,"r");
     if(NULL!=fgets(buff, sizeof(buff), fstream))
             QMessageBox::information(NULL, "pid", buff);
    else
       QMessageBox::information(NULL, "", "error");
    ui->exit->click();
}
