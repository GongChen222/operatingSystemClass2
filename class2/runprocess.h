#ifndef RUNPROCESS_H
#define RUNPROCESS_H

#include <QDockWidget>

namespace Ui {
class runprocess;
}

class runprocess : public QDockWidget
{
    Q_OBJECT

public:
    explicit runprocess(QWidget *parent = 0);
    ~runprocess();

private slots:


    void on_input_clicked();

private:
    Ui::runprocess *ui;
};

#endif // RUNPROCESS_H
