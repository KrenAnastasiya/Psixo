#ifndef TEST_H
#define TEST_H

#include <QString>
#include <QVector>
#include "question.h"
#include <QDebug>
class Test
{
private:
    QString name; // название теста
    QString info; // введение в тест, предисловие
    int qNum; // количество вопросов

    int resNum; // количество результатов
    QVector<int> key;  // группировака баллов для выявления результатов(число в массиве -  левая граница результата)
    QVector<QString> res; // описания результатов теста по группам

    int resScore; //кол-во баллов набранных за тест

public:
     QVector<question> questions; //список вопросов, с вариантами ответов и баллами за каждый ответ
    Test();

    void setName(QString str); //устанавливает название теста name равным str
    void setInfo(QString str); //устанавливает информацию о тесте info равной str
    void setQNum(int n); //устанавливает количество вопросов qNum равным n
    void setResNum(int n); //устанавливает количество групп результатов resNum равным n
    void setKey(int i,int n); //устанавливает минимальное количество для попадания в i-ую группу результатов равную n
    void setRes(int i,QString str); //устанавливает описание i-ой группы равным str

    QString getName(); //получает название теста name
    QString getInfo(); //получает информацию о тесте info
    int getQNum(); //получает количество вопросов qNum
    int getResNum(); //получает количество групп результатов resNum
    int getKey(int i); //получает минимальное количество для попадания в i-ую группу результатов
    QString getRes(int i); //получает описание i-ой группы
    int getResScore(); // получает кол-во набранных баллов

    void showName(); //отображает название теста name
    void showInfo(); //отображает информацию о тесте info
    void showQNum(); //отображает количество вопросов qNum
    void showResNum(); //отображает количество групп результатов resNum
    void showKey(int i); //отображает минимальное количество для попадания в i-ую группу результатов
    void showtRes(int i); //отображает описание i-ой группы

    void showTestEntirely(); //отображает всю информацию о тесте
    void resetResScore();
    void reply(int i,int j);//выбрать j-ый вариант ответа на i-ый вопрос
    int testResult(); // возращает номер группы, в которую попадает набранное кол-во баллов
};

#endif // TEST_H
