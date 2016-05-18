#include "cabinet.h"
#include "ui_cabinet.h"
#include <QFile>
#include<QString>
#include <QDir>

#define APP_HOME_DIR QDir::homePath() + "/ppsixo"

cabinet::cabinet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cabinet)
{

    ui->setupUi(this);
    setFixedSize(967, 824);
}

cabinet::~cabinet()
{
    delete ui;
}
void cabinet::setInfo()
{
    QFile file(APP_HOME_DIR+"/cur.txt");
    file.open(QIODevice::ReadOnly);
    QString user=file.readLine();
    file.close();
    ui->label->setText(user);
    file.setFileName(APP_HOME_DIR+"/users.txt");
    file.open(QIODevice::ReadOnly);
    QString s;
    while((s=file.readLine())!=user){}
    s=file.readLine();
    ui->label_2->setText("1)");
    ui->label_3->setText("уровень внимательности");
    ui->label_4->setText("кол-во набранных балов:"+file.readLine());
    ui->label_5->setText("значение:"+file.readLine());
    ui->label_9->setText("2)");
    ui->label_6->setText("Вы прагматик или мечтатель?");
    ui->label_8->setText("кол-во набранных балов:"+file.readLine());
    ui->label_7->setText("значение:"+file.readLine());
    ui->label_13->setText("3)");
    ui->label_10->setText("Каков уровень Вашего воображения?");
    ui->label_12->setText("кол-во набранных балов:"+file.readLine());
    ui->label_11->setText("значение:"+file.readLine());
    ui->label_17->setText("4)");
    ui->label_14->setText("Любите ли Вы себя");
    ui->label_16->setText("кол-во набранных балов:"+file.readLine());
    ui->label_15->setText("значение:"+file.readLine());
    ui->label_21->setText("5)");
    ui->label_18->setText("Насколько вы ленивы");
    ui->label_20->setText("кол-во набранных балов:"+file.readLine());
    ui->label_19->setText("значение:"+file.readLine());
    ui->label_25->setText("6)");
    ui->label_22->setText("Есть ли у вас задатки лидера?");
    ui->label_24->setText("кол-во набранных балов:"+file.readLine());
    ui->label_23->setText("значение:"+file.readLine());
}

void cabinet::on_pushButton_clicked()
{
    QFile file(APP_HOME_DIR+"/cur.txt");
    file.open(QIODevice::WriteOnly);
    file.write("");
    file.close();
    this->close();
}
