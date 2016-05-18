#ifndef SOME_H
#define SOME_H

#include <QMainWindow>

namespace Ui {
class some;
}

class some : public QMainWindow
{
    Q_OBJECT

public:
    explicit some(QWidget *parent = 0);
    ~some();

private:
    Ui::some *ui;
};

#endif // SOME_H
