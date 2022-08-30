#include "mainwindow.h"
#include <QApplication>
#include"leftbuttongroup.h"
#include"homepage.h"
#include"product.h"
#include"header.h"
#include"material.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //LeftButtonGroup lbg;
    //lbg.show();
    MainWindow w;
    w.show();
    //homepage hp;
    //hp.show();
    //product d;
    //d.show();
    //header d;
    //d.show();
    //material m;
    //m.show();

    return a.exec();
}
