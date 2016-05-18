#ifndef TESTINFO_H
#define TESTINFO_H

#include<QString>
class testinfo
{
public:
    testinfo();
    void setNum(int n);
    void setTestName(QString s);
    void setScore(int n);
    void setRes(QString s);
    int getNum();
    QString getTestName();
    int getScore();
    QString getRes();
private:
    int num;
    QString testName;
    int score;
    QString res;

};

#endif // TESTINFO_H
