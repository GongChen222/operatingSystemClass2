#ifndef KILLPROCESS_H
#define KILLPROCESS_H

#include <QDockWidget>

namespace Ui {
class killprocess;
}

class killprocess : public QDockWidget
{
    Q_OBJECT

public:
    explicit killprocess(QWidget *parent = 0);
    ~killprocess();

private slots:
    void on_inputpid_clicked();

private:
    Ui::killprocess *ui;
};

#endif // KILLPROCESS_H
