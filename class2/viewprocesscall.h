#ifndef VIEWPROCESSCALL_H
#define VIEWPROCESSCALL_H

#include <QDockWidget>

namespace Ui {
class viewprocesscall;
}

class viewprocesscall : public QDockWidget
{
    Q_OBJECT

public:
    explicit viewprocesscall(QWidget *parent = 0);
    ~viewprocesscall();

private slots:
    void on_input_clicked();

private:
    Ui::viewprocesscall *ui;
};

#endif // VIEWPROCESSCALL_H
