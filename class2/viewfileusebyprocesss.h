#ifndef VIEWFILEUSEBYPROCESSS_H
#define VIEWFILEUSEBYPROCESSS_H

#include <QDockWidget>

namespace Ui {
class viewfileusebyprocesss;
}

class viewfileusebyprocesss : public QDockWidget
{
    Q_OBJECT

public:
    explicit viewfileusebyprocesss(QWidget *parent = 0);
    ~viewfileusebyprocesss();

private slots:
    void on_show_clicked();

private:
    Ui::viewfileusebyprocesss *ui;
};

#endif // VIEWFILEUSEBYPROCESSS_H
