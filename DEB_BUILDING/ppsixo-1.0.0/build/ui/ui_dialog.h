/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(951, 436);
        Dialog->setWindowTitle(QStringLiteral("Dialog"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 271, 21));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAcceptDrops(true);
        label->setWordWrap(true);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 721, 131));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setWordWrap(true);
        radioButton = new QRadioButton(Dialog);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(280, 310, 125, 27));
        QFont font2;
        font2.setPointSize(14);
        radioButton->setFont(font2);
        radioButton_2 = new QRadioButton(Dialog);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(280, 340, 125, 27));
        radioButton_2->setFont(font2);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 380, 82, 31));
        pushButton->setFont(font2);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 631, 101));
        label_3->setFont(font2);
        label_3->setWordWrap(true);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(670, 170, 256, 256));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/Diegoicon.png")));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(820, 0, 131, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(810, 70, 111, 31));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 951, 436));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/2fons.ru-16024.png")));
        label_6->raise();
        label->raise();
        label_2->raise();
        radioButton->raise();
        radioButton_2->raise();
        pushButton->raise();
        label_3->raise();
        label_4->raise();
        pushButton_2->raise();
        label_5->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        label->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_2->setText(QApplication::translate("Dialog", "TextLabel", 0));
        radioButton->setText(QApplication::translate("Dialog", "RadioButton", 0));
        radioButton_2->setText(QApplication::translate("Dialog", "RadioButton", 0));
        pushButton->setText(QApplication::translate("Dialog", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0));
        label_3->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("Dialog", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", 0));
        label_5->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_6->setText(QString());
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
