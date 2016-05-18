#include "testinfo.h"
#include<QString>
testinfo::testinfo()
{

}
void testinfo::setNum(int n)
{
    num=n;
}
void testinfo::setTestName(QString s)
{
    testName=s;
}
void testinfo::setScore(int n)
{
    score=n;
}
void testinfo::setRes(QString s)
{
    res=s;
}
int testinfo::getNum()
{
    return num;
}
QString testinfo::getTestName()
{
    return testName;
}
int testinfo::getScore()
{
    return score;
}
QString testinfo::getRes()
{
    return res;
}
