#include "dialog2.h"
#include "ui_dialog2.h"
#include "enter.h"
#include "cabinet.h"
#include <QFile>
#include <QDir>

#define APP_HOME_DIR QDir::homePath() + "/ppsixo"
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    setFixedSize(950, 400);
}

Dialog2::~Dialog2()
{
    delete ui;
}
void Dialog2::output(int i, QString str)
{
   ui->label->setText("ваш балл: "+ QString::number(i));
    ui->label_2->setText(str);
}

void Dialog2::on_pushButton_clicked()
{
    this->close();
}

void Dialog2::on_pushButton_2_clicked()
{
    QFile file(APP_HOME_DIR+"/cur.txt");
    file.open(QIODevice::ReadOnly);
    QString s=file.readLine();
    file.close();
    if(s=="")
    {
       enter e;
       e.exec();
    }
    else
    {
        cabinet d;
           d.setInfo();
         d.exec();
    }

}
