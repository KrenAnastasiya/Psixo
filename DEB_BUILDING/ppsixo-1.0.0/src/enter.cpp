#include "enter.h"
#include "ui_enter.h"
#include "cabinet.h"
#include <QFile>
#include <QDebug>
#include <QDir>

#define APP_HOME_DIR QDir::homePath() + "/ppsixo"
enter::enter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::enter)
{
    ui->setupUi(this);
     setFixedSize(501, 281);
}

enter::~enter()
{
    delete ui;
}

void enter::on_pushButton_clicked()
{
    QFile file(APP_HOME_DIR+"/users.txt");
    file.open(QIODevice::ReadOnly);
    bool b=false;
    QString user=ui->lineEdit->text()+"\r\n";
    if (user=="\r\n"){
        ui->label_3->setText("Введите имя пользователя");
        return;
    }
    QString parol=ui->lineEdit_2->text()+"\r\n";
    if (parol=="\r\n"){
        ui->label_3->setText("Введите пароль");
        return;
    }
    while(!file.atEnd())
    {
        QString str = file.readLine();
        if(str==user)
        {
            b=true;
            QString s = file.readLine();
            if(s==parol)
            {
                QFile file1(APP_HOME_DIR+"/cur.txt");
                file1.open(QIODevice::WriteOnly);
                file1.write(str.toLatin1().data());
                file1.close();
                cabinet c;
                this->close();
                 c.setInfo();
                c.exec();
                break;
            }
            else
            {
                ui->label_3->setText("Неверный пароль");
                break;
            }
        }
        else
        {
            for(int i=0;i<13;i++)
            {
                QString s = file.readLine();
            }
     }
    if(!b)
    {
        ui->label_3->setText("Нет такого пользователя");
    }
    }
    file.close();
}

void enter::on_pushButton_2_clicked()
{
    QFile file(APP_HOME_DIR+"/users.txt");
    file.open(QIODevice::ReadOnly);
    QString user=ui->lineEdit->text();
    if (user==""){
        ui->label_3->setText("Введите имя пользователя");
        return;
    }
    if(user.indexOf("\\",0)!=-1){
        ui->label_3->setText("\"\\\"- недопусимый символ");
        return;
    }
    user+="\r\n";
    QString parol=ui->lineEdit_2->text();
    if (parol==""){
        ui->label_3->setText("Введите пароль");
        return;
    }
    if(parol.indexOf("\\",0)!=-1){
        ui->label_3->setText("\"\\\"- недопусимый символ");
        return;
    }
    parol+="\r\n";
    while(!file.atEnd())
    {
        QString str = file.readLine();
        qDebug()<<str;
        qDebug()<<user;
        if(str==user)
        {
            ui->label_3->setText("такой пользователь уже существует");
            return;
        }
        else
        {
            for(int i=0;i<14;i++)
            {
                QString s = file.readLine();
            }
     }

    }
    file.close();
    file.setFileName(APP_HOME_DIR+"/users.txt");
    file.open(QIODevice::ReadOnly);
    QString f=file.readAll();
    file.close();
    if(f!=""){f+="\r\n";}
    f+=user;
    f+=parol;
    f+="0\r\nне пройден\r\n";
    f+="0\r\nне пройден\r\n";
    f+="0\r\nне пройден\r\n";
    f+="0\r\nне пройден\r\n";
    f+="0\r\nне пройден\r\n";
    f+="0\r\nне пройден";
    file.setFileName(APP_HOME_DIR+"/users.txt");
    file.open(QIODevice::WriteOnly);
    file.write(f.toUtf8().data());
    file.close();
    file.setFileName(APP_HOME_DIR+"/cur.txt");
    file.open(QIODevice::WriteOnly);
    file.write(user.toLatin1().data());
    file.close();
    cabinet c;
    this->close();
    c.setInfo();
    c.exec();

}
