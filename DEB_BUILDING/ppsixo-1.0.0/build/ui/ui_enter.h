/********************************************************************************
** Form generated from reading UI file 'enter.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_H
#define UI_ENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_enter
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *enter)
    {
        if (enter->objectName().isEmpty())
            enter->setObjectName(QStringLiteral("enter"));
        enter->resize(501, 281);
        lineEdit = new QLineEdit(enter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(240, 110, 211, 20));
        label_2 = new QLabel(enter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 140, 91, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        pushButton = new QPushButton(enter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 192, 75, 31));
        pushButton->setFont(font);
        lineEdit_2 = new QLineEdit(enter);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 140, 211, 20));
        label = new QLabel(enter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 110, 61, 31));
        label->setFont(font);
        pushButton_2 = new QPushButton(enter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 192, 191, 31));
        pushButton_2->setFont(font);
        label_3 = new QLabel(enter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 230, 391, 41));
        label_3->setFont(font);
        label_4 = new QLabel(enter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 501, 281));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/gomer.png")));
        label_4->raise();
        lineEdit->raise();
        label_2->raise();
        pushButton->raise();
        lineEdit_2->raise();
        label->raise();
        pushButton_2->raise();
        label_3->raise();

        retranslateUi(enter);

        QMetaObject::connectSlotsByName(enter);
    } // setupUi

    void retranslateUi(QDialog *enter)
    {
        enter->setWindowTitle(QApplication::translate("enter", "Dialog", 0));
        label_2->setText(QApplication::translate("enter", "\320\237\320\260\321\200\320\276\320\273\320\273\321\214", 0));
        pushButton->setText(QApplication::translate("enter", "\320\222\320\276\320\271\321\202\320\270", 0));
        label->setText(QApplication::translate("enter", "\320\233\320\276\320\263\320\270\320\275", 0));
        pushButton_2->setText(QApplication::translate("enter", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", 0));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class enter: public Ui_enter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_H
