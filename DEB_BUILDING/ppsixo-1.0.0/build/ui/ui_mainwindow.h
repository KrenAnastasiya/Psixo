/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPersonal;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QLabel *label;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_10;
    QLabel *label_8;
    QPushButton *pushButton_11;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 800);
        actionPersonal = new QAction(MainWindow);
        actionPersonal->setObjectName(QStringLiteral("actionPersonal"));
        QIcon icon;
        icon.addFile(QStringLiteral("home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPersonal->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 410, 200, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 277, 197, 141));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/\321\202\320\265\321\201\321\202 \320\275\320\260 \320\262\320\275\320\270\320\274\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214.png")));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 277, 197, 141));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/\320\262\321\213 \320\277\321\200\320\260\320\263\320\274\320\260\321\202\320\270\320\272 \320\270\320\273\320\270 \320\274\320\265\321\207\321\202\320\260\321\202\320\265\320\273\321\214.png")));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 410, 197, 23));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(710, 410, 197, 23));
        pushButton_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(710, 277, 197, 141));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/\320\272\320\260\320\272\320\276\320\262 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\262\320\260\321\210\320\265\320\276 \320\262\320\276\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217.png")));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 570, 197, 23));
        pushButton_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 437, 197, 141));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/\320\273\321\216\320\261\320\270\321\202\320\265 \320\273\320\270 \320\262\321\213 \321\201\320\265\320\261\321\217.png")));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(430, 437, 197, 141));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/\320\273\320\265\320\275\321\214.png")));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(430, 570, 197, 23));
        pushButton_5->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(710, 437, 197, 141));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/\320\273\320\270\320\264\320\265\321\200\321\201\321\202\320\262\320\276.png")));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(710, 570, 197, 23));
        pushButton_6->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1024, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Main.png")));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 30, 181, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_7->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(50, 50));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(820, 40, 50, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(50, 50));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(960, 40, 50, 50));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);
        pushButton_9->setIconSize(QSize(50, 50));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(900, 50, 47, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_9->setPalette(palette);
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(820, 20, 181, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_10->setPalette(palette1);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_10->setFont(font3);
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(70, 720, 211, 31));
        pushButton_10->setFont(font3);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(430, 610, 561, 101));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_8->setPalette(palette2);
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_8->setFont(font4);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setWordWrap(true);
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(560, 720, 251, 31));
        pushButton_11->setFont(font3);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 610, 351, 91));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(76, 78, 79, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        textEdit->setPalette(palette3);
        QFont font5;
        font5.setPointSize(14);
        textEdit->setFont(font5);
        textEdit->setFrameShape(QFrame::NoFrame);
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        pushButton->raise();
        label_2->raise();
        label_3->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        label_4->raise();
        pushButton_4->raise();
        label_5->raise();
        label_6->raise();
        pushButton_5->raise();
        label_7->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        label_9->raise();
        label_10->raise();
        pushButton_10->raise();
        label_8->raise();
        pushButton_11->raise();
        textEdit->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Psixo", 0));
        actionPersonal->setText(QApplication::translate("MainWindow", "Personal", 0));
#ifndef QT_NO_TOOLTIP
        actionPersonal->setToolTip(QApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \320\275\320\260 \320\262\320\275\320\270\320\274\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", 0));
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\222\321\213 \320\277\321\200\320\260\320\263\320\274\320\260\321\202\320\270\320\272 \320\270\320\273\320\270 \320\274\320\265\321\207\321\202\320\260\321\202\320\265\320\273\321\214?", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\262\320\276\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", 0));
        label_4->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\233\321\216\320\261\320\270\321\202\320\265 \320\273\320\270 \320\262\321\213 \321\201\320\265\320\261\321\217?", 0));
        label_5->setText(QString());
        label_6->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\262\321\213 \320\273\320\265\320\275\320\270\320\262\321\213?", 0));
        label_7->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\225\321\201\321\202\321\214 \320\273\320\270 \321\203 \320\262\320\260\321\201 \320\267\320\260\320\264\320\260\321\202\320\272\320\270 \320\273\320\270\320\264\320\265\321\200\320\260?", 0));
        label->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", 0));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_10->setText(QApplication::translate("MainWindow", "\320\276\321\206\320\265\320\275\320\270\321\202\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\271 \320\272\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
