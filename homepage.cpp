#include "homepage.h"
#include "ui_homepage.h"
#include <QChartView>
#include <QLineSeries>
#include <QValueAxis>
#include <QtMath>
#include<QBarSet>
#include<QBarSeries>
#include<QBarCategoryAxis>
QT_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_END_NAMESPACE
homepage::homepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
    HomePageInit();
    HomePageDownInit();
    MakeCharts();
    MakeCharts_cy();
}
void homepage::HomePageDownInit(){
    ui->down1_btn->setFixedSize(16,16);
    ui->down_widget1->setStyleSheet("background-color:rgb(63,157,211);border-radius:8px");
    ui->down1_btn->setStyleSheet("background-color:rgb(255,255, 255);border-radius:8px");
    ui->down1_lab1->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab2->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab3->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab4->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab5->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab6->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab7->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab8->setStyleSheet("color:rgb(255,255,255)");
    ui->down1_lab9->setStyleSheet("color:rgb(255,255,255)");

    ui->down2_btn->setFixedSize(16,16);
    ui->down2_widget->setStyleSheet("background-color:rgb(56,178,141);border-radius:8px");
    ui->down2_btn->setStyleSheet("background-color:rgb(255,255, 255);border-radius:8px");
    ui->down2_lab1->setStyleSheet("color:rgb(255,255,255)");
    ui->down2_lab2->setStyleSheet("color:rgb(255,255,255)");
    ui->down2_lab3->setStyleSheet("color:rgb(255,255,255)");
    ui->down2_lab4->setStyleSheet("color:rgb(255,255,255)");
    ui->down2_lab5->setStyleSheet("color:rgb(255,255,255)");

    ui->down3_btn->setFixedSize(16,16);
    ui->down3_widget->setStyleSheet("background-color:rgb(253,107,107);border-radius:8px");
    ui->down3_btn->setStyleSheet("background-color:rgb(255,255, 255);border-radius:8px");
    ui->down3_lab1->setStyleSheet("color:rgb(255,255,255)");
    ui->down3_lab2->setStyleSheet("color:rgb(255,255,255)");
    ui->down3_lab3->setStyleSheet("color:rgb(255,255,255)");
    ui->down3_lab4->setStyleSheet("color:rgb(255,255,255)");
    ui->down3_lab5->setStyleSheet("color:rgb(255,255,255)");
    ui->down3_lab6->setStyleSheet("color:rgb(255,255,255)");
    ui->down3_lab7->setStyleSheet("color:rgb(255,255,255)");

    ui->down4_btn->setFixedSize(16,16);
    ui->down4_widget->setStyleSheet("background-color:rgb(232,155,101);border-radius:8px");
    ui->down4_btn->setStyleSheet("background-color:rgb(255,255, 255);border-radius:8px");
    ui->down4_lab1->setStyleSheet("color:rgb(255,255,255)");
    ui->down4_lab2->setStyleSheet("color:rgb(255,255,255)");
    ui->down4_lab3->setStyleSheet("color:rgb(255,255,255)");
    ui->down4_lab4->setStyleSheet("color:rgb(255,255,255)");
    ui->down4_lab5->setStyleSheet("color:rgb(255,255,255)");
    ui->down4_lab6->setStyleSheet("color:rgb(255,255,255)");
    ui->down4_lab7->setStyleSheet("color:rgb(255,255,255)");
}
void homepage::MakeCharts(){
    //QChartView *chartView=new QChartView(ui->homewid1);
    QChart* chart = new QChart();
    QLineSeries *series = new QLineSeries();

    for (quint32 i = 0; i < 10; i++) {

        series->append(i, sin(0.6f*i));

    }
    chart->addSeries(series);
    chart->setTitle("销售折线图");
    chart->createDefaultAxes();
    ui->makecharts_1->setChart(chart);
}
void homepage::MakeCharts_cy(){
    //26-30行 定义了表下方的标签
    QBarSet *set0 = new QBarSet("Jane");
    QBarSet *set1 = new QBarSet("John");
    QBarSet *set2 = new QBarSet("Axel");
    QBarSet *set3 = new QBarSet("Mary");
    QBarSet *set4 = new QBarSet("Samantha");

    //33-37行 给柱状赋值
    *set0 << 1 << 1 << 3 << 4 << 5 << 6;
    *set1 << 1 << 1 << 3 << 4 << 5 << 6;
    *set2 << 1 << 1 << 3 << 4 << 5 << 6;
    *set3 << 1 << 1 << 3 << 4 << 5 << 6;
    *set4 << 1 << 1 << 3 << 4 << 5 << 6;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("plane pillarMap");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
    //实例化坐标轴文字标识轴
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    //将文字放入标识轴中
    axis->append(categories);
    //创建默认的坐标轴
    chart->createDefaultAxes();
    //设置坐标轴
    chart->setAxisX(axis, series);

    //设置图例为显示状态
    chart->legend()->setVisible(true);
    //设置图例位置为底部
    chart->legend()->setAlignment(Qt::AlignBottom);
    ui->makecharts_2->setChart(chart);




}
void homepage::HomePageInit(){
    ui->homewid1->setStyleSheet("background-color:rgb(240,243,248)");


    ui->up1_btn1->setFixedSize(70,70);
    ui->up1_btn1->setText("75");
    ui->up1_btn1->setStyleSheet("color:rgb(255,255,255);background-color:rgb(56, 178, 141);border-radius:35px;font-size:30px");

    ui->up2_btn1->setFixedSize(70,70);
    ui->up2_btn1->setText("352");
    ui->up2_btn1->setStyleSheet("color:rgb(255,255,255);background-color:rgb(253, 107, 107);border-radius:35px;font-size:30px");

    ui->up3_btn1->setFixedSize(70,70);
    ui->up3_btn1->setText("9405");
    ui->up3_btn1->setStyleSheet("color:rgb(255,255,255);background-color:rgb(63, 157, 211);border-radius:35px;font-size:30px");

    ui->up4_btn1->setFixedSize(70,70);
    ui->up4_btn1->setText("01");
    ui->up4_btn1->setStyleSheet("color:rgb(255,255,255);background-color:rgb(232, 155, 101);border-radius:35px;font-size:30px");
}

homepage::~homepage()
{
    delete ui;
}
