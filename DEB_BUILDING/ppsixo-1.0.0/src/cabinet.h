#ifndef CABINET_H
#define CABINET_H

#include <QDialog>

namespace Ui {
class cabinet;
}

class cabinet : public QDialog
{
    Q_OBJECT

public:
    explicit cabinet(QWidget *parent = 0);
    ~cabinet();
    void setInfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cabinet *ui;
};

#endif // CABINET_H
