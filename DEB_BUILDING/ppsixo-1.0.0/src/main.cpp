#include "mainwindow.h"

#include <QApplication>
#include <QFile>

#include <QDebug>
#include <QString>
#include <QDir>

#define APP_HOME_DIR QDir::homePath() + "/ppsixo"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   w.show();
   QFile file(APP_HOME_DIR+"/cur.txt");
    file.open(QIODevice::WriteOnly);
    file.write("");
    file.close();




    return a.exec();
}
