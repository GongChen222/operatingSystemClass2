#ifndef VIEWPROCESSUSEFILES_H
#define VIEWPROCESSUSEFILES_H

#include <QDockWidget>

namespace Ui {
class viewProcessUseFiles;
}

class viewProcessUseFiles : public QDockWidget
{
    Q_OBJECT

public:
    explicit viewProcessUseFiles(QWidget *parent = 0);
    ~viewProcessUseFiles();

private slots:
    void on_show_clicked();

private:
    Ui::viewProcessUseFiles *ui;
};

#endif // VIEWPROCESSUSEFILES_H
