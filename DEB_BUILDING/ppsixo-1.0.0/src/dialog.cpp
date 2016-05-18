#include "dialog.h"
#include "dialog2.h"
#include "ui_dialog.h"
#include "enter.h"
#include "cabinet.h"
#include <QFile>
#include <QDir>

#define APP_HOME_DIR QDir::homePath() + "/ppsixo"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setFixedSize(950, 435);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::showOut()
{

    ui->label->setText(t.getName());
    ui->label_2->setText(t.getInfo());
    ui->label_3->setText(t.questions[my_count].getText());
    ui->label_5->setText(QString::number(my_count+1)+"/"+QString::number(t.getQNum()));
    ui->radioButton->setText(t.questions[my_count].getAnswer(0));
    ui->radioButton_2->setText(t.questions[my_count].getAnswer(1));

}

void Dialog::on_pushButton_clicked()
{
    if(my_count<t.getQNum()-1)
    {
        if(ui->radioButton->isChecked())
        {
            t.reply(my_count,0);
            my_count++;
            showOut();
        }
        else
        {
            if(ui->radioButton_2->isChecked())
            {
                t.reply(my_count,1);
                my_count++;
                showOut();
            }

        }
    }
    else
    {

        if(ui->radioButton->isChecked())
        {
            t.reply(my_count,0);

        }
        else
        {
            if(ui->radioButton_2->isChecked())
            {
                t.reply(my_count,1);

            }

        }
        QFile file(APP_HOME_DIR+"/cur.txt");
        file.open(QIODevice::ReadOnly);
        QString s=file.readLine();
        file.close();

        if(s!="")
        {
           QString tofile="";
           QString str="";
           file.setFileName(APP_HOME_DIR+"/users.txt");
           file.open(QIODevice::ReadOnly);
           while((str=file.readLine())!=(s))
           {
               tofile+=str;
           }
           tofile+=str;
           str=t.getName();
           int n;
           if(str== "уровень внимательности"){ n=1;}
           if(str== "Вы прагматик или мечтатель?"){ n=3;}
           if(str== "Каков уровень Вашего воображения?"){ n=5;}
           if(str== "Любите ли Вы себя"){ n=7;}
           if(str== "Насколько вы ленивы"){ n=9;}
           if(str== "Есть ли у вас задатки лидера?"){ n=11;}




           for(int i=0;i<n;i++)
           {
               tofile+=file.readLine();
           }
           tofile+=QString::number(t.getResScore());
           tofile+="\r\n";
           tofile+=t.getRes(t.testResult());
           tofile+="\r\n";
           file.readLine();
           file.readLine();
           while(!file.atEnd())
           {
               tofile+=file.readLine();
           }
           file.close();
           file.setFileName(APP_HOME_DIR+"/users.txt");
           file.open(QIODevice::WriteOnly);
           file.write(tofile.toUtf8().data());
           file.close();
        }

        Dialog2 d2;
        this->close();
        d2.output(t.getResScore(),t.getRes(t.testResult()));
        d2.exec();

    }




}

void Dialog::on_pushButton_2_clicked()
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
