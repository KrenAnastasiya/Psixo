/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(967, 402);
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 50, 231, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Dialog2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 100, 571, 201));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setWordWrap(true);
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 310, 151, 51));
        pushButton->setFont(font1);
        label_3 = new QLabel(Dialog2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 10, 261, 371));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/monstersuniversityjamespsullivanicon2.png")));
        pushButton_2 = new QPushButton(Dialog2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 0, 131, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        label_4 = new QLabel(Dialog2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 967, 402));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/2fons.ru-16024.png")));
        label_4->raise();
        label->raise();
        pushButton->raise();
        label_3->raise();
        pushButton_2->raise();
        label_2->raise();

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", 0));
        label->setText(QApplication::translate("Dialog2", "TextLabel", 0));
        label_2->setText(QApplication::translate("Dialog2", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Dialog2", "oK", 0));
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("Dialog2", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", 0));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
