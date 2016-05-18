#include "some.h"
#include "ui_some.h"

some::some(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::some)
{
    ui->setupUi(this);
}

some::~some()
{
    delete ui;
}
