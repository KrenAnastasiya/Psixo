#ifndef ENTER_H
#define ENTER_H

#include <QDialog>

namespace Ui {
class enter;
}

class enter : public QDialog
{
    Q_OBJECT

public:
    explicit enter(QWidget *parent = 0);
    ~enter();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::enter *ui;
};

#endif // ENTER_H
