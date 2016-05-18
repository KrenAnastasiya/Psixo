#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include <QString>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = 0);
    ~Dialog2();
    void output(int i,QString str);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
