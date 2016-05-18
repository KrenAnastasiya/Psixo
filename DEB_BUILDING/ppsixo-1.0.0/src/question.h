#ifndef QUESTION_H
#define QUESTION_H

#include <QString>
#include <QVector>

class question
{
private:
    QString text; // текст вопроса
    int num; //кол-во вариантов ответа
    QVector<QString> answers; // варианты ответов
    QVector<int> score; //баллы за каждый из ответов
public:
    question(); //конструктор

    void setText(QString str); // устанавливает значение текста вопроса text равным str
    void setNum(int n); // устанавливает кол-во вариантов ответа num равным n
    void setAnswer(int i,QString str); //устанавливает i-ый вариант ответа answer равным str
    void setScore(int i,int n); //устанавливает, что i-му ответу на вопрос будет соответствовать n баллов(score[i]=n)

    QString getText(); // получает значение текста вопроса text
    int getNum(); // получает кол-во вариантов ответа num
    QString getAnswer(int i); //получает i-ый вариант ответа answer
    int getScore(int i); //получает количество баллов соответствующее i-му ответу на вопрос

    void showText();//выведет текст вопроса text
    void showNum(); // выведет кол-во вариантов ответа num
    void showAnswer(int i); //выведет текст i-го варианта ответа answer
    void showScore(int i); // выведет кол-во баллов за i-ый вопрос
    void showAll(); // выведет всю информацию о вопросе

};

#endif // QUESTION_H
