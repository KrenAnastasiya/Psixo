#include "question.h"
#include <QString>
#include <QVector>
#include <iostream>
#include <QDebug>
#include <QDir>

#define APP_HOME_DIR QDir::homePath() + "/ppsixo"
question::question()
{
    text = "текст вопроса";
    num = 0;
    answers.resize(0);
    score.resize(0);
}


void question::setText(QString str)
{

    text = str;

}
void question::setNum(int n)
{
    num = n;
    answers.resize(num);
    score.resize(num);
}
void question::setAnswer(int i,QString str)
{
    answers[i] = str;
}
void question::setScore(int i,int n)
{
    score[i]=n;
}

QString question::getText()
{
    return text;
}
int question::getNum()
{
    return num;
}
QString question::getAnswer(int i)
{
    return answers[i];
}
int question::getScore(int i)
{
    return score[i];
}

void question::showText()
{
    qDebug()<<"текст вопроса:\n"<<text<<"\n";

}
void question::showNum()
{
     qDebug()<<"кол-во вариантов ответа: "<<num<<"\n";
}
void question::showAnswer(int i)
{
    qDebug()<<i<<") "<<answers[i]<<"\n";
}
void question::showScore(int i)
{
     qDebug()<<i<<") "<<score[i]<<"баллов \n";
}
void question::showAll()
{
    showText();
    showNum();
    for(int i=0;i<num;i++)
    {
        showAnswer(i);
        showScore(i);
    }
}
