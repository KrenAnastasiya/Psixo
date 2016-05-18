#include "test.h"

Test::Test()
{
    name="название теста";
    info = "информация о тесте";
    qNum=0;
    resNum=0;
    key.resize(0);
    res.resize(0);
    resScore=0;
}

void Test::setName(QString str)
{
    name = str;
}
void Test::setInfo(QString str)
{
    info=str;
}
void Test::setQNum(int n)
{
    qNum=n;
    questions.resize(n);
}
void Test::setResNum(int n)
{
    resNum=n;
    key.resize(n);
    res.resize(n);
}
void Test::setKey(int i, int n)
{
    key[i] = n;
}
void Test::setRes(int i, QString str)
{
    res[i] = str;
}
QString Test::getName()
{
    return name;
}
QString Test::getInfo()
{
    return info;
}
int Test::getQNum()
{
    return qNum;
}
int Test::getResNum()
{
    return resNum;
}
int Test::getKey(int i)
{
    return key[i];
}
QString Test::getRes(int i)
{
    return res[i];
}
int Test::getResScore()
{
    return resScore;
}

void Test::showName()
{
    qDebug()<<"название теста: "<<name<<"\n";
}
void Test::showInfo()
{
    qDebug()<<"введение: "<<info<<"\n";
}
void Test::showQNum()
{
    qDebug()<<"кол-во вопросов: "<<qNum<<"\n";
}
void Test::showResNum()
{
    qDebug()<<"кол-во групп результатов: "<<resNum<<"\n";
}
void Test::showKey(int i)
{
    qDebug()<<i<<"-ая группа от "<<key[i]<<" баллов\n";
}
void Test::showtRes(int i)
{
    qDebug()<<"значение "<<i<<"-ой группы: "<<res<<"\n";
}
void Test::showTestEntirely()
{
     qDebug()<<"название теста: "<<name<<"\n";
      qDebug()<<"введение: \n"<<info<<"\n";
      qDebug()<<"кол-во вопросов: "<<qNum<<"\n";
      for (int i=0;i<qNum;i++)
      {
          questions[i].showAll();
      }
       qDebug()<<"кол-во групп результатоа: "<<resNum<<"\n";
       for (int i=0;i<resNum;i++)
       {
           qDebug()<<"от "<<key[i]<<"баллов:\n";
            qDebug()<<res[i]<<"\n";
       }
        qDebug()<<"кол-во набранных баллов: "<<resScore<<"\n";
}
void Test::resetResScore()
{
   resScore=0;
}
void Test::reply(int i, int j)
{
    resScore+=questions[i].getScore(j);
}
int Test::testResult()
{
    for(int i=1;i<resNum;i++)
    {
        if(key[i]>resScore)
        {
            //qDebug()<<"результата теста:\n"<<res[i-1];
            return i-1;
        }
    }
    return resNum-1;
}
