#include "viewprocesscall.h"
#include "ui_viewprocesscall.h"
#include <QDebug>
viewprocesscall::viewprocesscall(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::viewprocesscall)
{
    ui->setupUi(this);
}

viewprocesscall::~viewprocesscall()
{
    delete ui;
}

void viewprocesscall::on_input_clicked()
{
    QString QprocessName=ui->processname->text();
    QString Qcmd="strace -o 1.txt ./"+QprocessName;
    QByteArray ba = Qcmd.toLatin1();
    char *cmd = ba.data();
    qDebug()<<cmd;
    ui->calllist->clear();

    int ret = system(cmd);
    if(ret!=0){
        ui->calllist->append("error");
        return;
    }else{
        FILE *fstream=NULL;
        char buff[1024];
        memset(buff,0,sizeof(buff));
        if(NULL!=(fstream=fopen("1.txt","r")))
            while(NULL!=fgets(buff, sizeof(buff), fstream))
                ui->calllist->append(buff);
    }

}
