#include "viewprocessusefiles.h"
#include "ui_viewprocessusefiles.h"
#include <QDebug>
viewProcessUseFiles::viewProcessUseFiles(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::viewProcessUseFiles)
{
    ui->setupUi(this);
}

viewProcessUseFiles::~viewProcessUseFiles()
{
    delete ui;
}

void viewProcessUseFiles::on_show_clicked()
{
    QString Qpid=ui->pid->text();
    QString Qcmd="lsof -p "+Qpid;
    QByteArray ba = Qcmd.toLatin1();
    char *cmd = ba.data();
    qDebug()<<cmd;
    ui->filelist->clear();
    FILE *fstream=NULL;
    char buff[1024];
    memset(buff,0,sizeof(buff));
    if(NULL!=(fstream=popen(cmd,"r")))
        while(NULL!=fgets(buff, sizeof(buff), fstream))
            ui->filelist->append(buff);
}
