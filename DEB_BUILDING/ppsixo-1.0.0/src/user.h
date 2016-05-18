#ifndef USER_H
#define USER_H
#include<QString>
#include "testinfo.h"

class user
{
public:
    user();
    void setLogin(QString s);
    void setParol(QString s);
    void setTest(testinfo t);
    void setChosen(bool b);
private:
    QString login;
    QString parol;
    testinfo tests[1];
    bool chosen;
};

#endif // USER_H
