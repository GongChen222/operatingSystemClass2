#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void show_all_peocess();
    void on_show_clicked();

    void on_kill_clicked();

    void on_create_clicked();

    void on_viewFilesByPid_clicked();

    void on_viewProcessByFile_clicked();

    void on_viewprocesscall_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
