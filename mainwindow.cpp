#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->mainwindow_wd1->setStyleSheet("background-color:rgb(53,64,82)");
    // 去掉边框
    //this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    //处理所事件
    managerSignals();
}
void MainWindow::Init(){
    //ui->deskbtn
}
void MainWindow::managerSignals(){
    connect(ui->mainwindow_wd1,&LeftButtonGroup::sigProduct,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page_2);
    });
    connect(ui->mainwindow_wd1,&LeftButtonGroup::sigHome,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page);
    });
    connect(ui->page_2,&product::sigMaterial_record,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page_3);
    });
}
MainWindow::~MainWindow()
{
    delete ui;
}
