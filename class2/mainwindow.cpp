#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string.h"
#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "killprocess.h"
#include "runprocess.h"
#include "viewprocessusefiles.h"
#include "viewfileusebyprocesss.h"
#include "viewprocesscall.h"

#define MAXBUFSIZE 1024

typedef struct process_detail{
    char  pid[20];
    char tty[20] ;
    char time[20];
    char cmd[20];
} DET_PRO;

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

//show all process
void MainWindow::show_all_peocess(){
    ui->processlist->clear();
    FILE *fstream=NULL;
    char buff[1024];
    memset(buff,0,sizeof(buff));
    if(NULL!=(fstream=popen("ps -A","r")))
        while(NULL!=fgets(buff, sizeof(buff), fstream))
            ui->processlist->append(buff);
}

//button show clicked
void MainWindow::on_show_clicked(){
    show_all_peocess();
}

//button run clicked
void MainWindow::on_create_clicked(){
    runprocess *r = new runprocess();
     r->show();
}
//button kill clicked
void MainWindow::on_kill_clicked(){
    killprocess *k = new killprocess();
    k->show();
}

//button view files opened by process
void MainWindow::on_viewFilesByPid_clicked(){
    viewProcessUseFiles *v=new viewProcessUseFiles();
    v->show();
}

//button see which processes use file
void MainWindow::on_viewProcessByFile_clicked(){
    viewfileusebyprocesss *v = new viewfileusebyprocesss();
    v->show();
}
//button view process system call
void MainWindow::on_viewprocesscall_clicked(){
    viewprocesscall *v = new viewprocesscall();
    v->show();
}
