#include "viewfileusebyprocesss.h"
#include "ui_viewfileusebyprocesss.h"
#include <QDebug>
viewfileusebyprocesss::viewfileusebyprocesss(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::viewfileusebyprocesss)
{
    ui->setupUi(this);
}

viewfileusebyprocesss::~viewfileusebyprocesss()
{
    delete ui;
}

void viewfileusebyprocesss::on_show_clicked()
{
    QString QfileName=ui->filename->text();
    QString Qcmd="lsof "+QfileName;
    QByteArray ba = Qcmd.toLatin1();
    char *cmd = ba.data();
    qDebug()<<cmd;
    ui->processlist->clear();
    FILE *fstream=NULL;
    char buff[1024];
    memset(buff,0,sizeof(buff));
    if(NULL!=(fstream=popen(cmd,"r")))
        while(NULL!=fgets(buff, sizeof(buff), fstream))
            ui->processlist->append(buff);
}
