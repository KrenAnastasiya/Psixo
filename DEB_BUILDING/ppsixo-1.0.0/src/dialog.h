#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include"test.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT



public:
    int my_count;
    Test t;
    void showOut();

    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
