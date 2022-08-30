#include "product.h"
#include "ui_product.h"
#include<QList>
#include<QString>
#include <QChartView>
#include <QLineSeries>
#include <QValueAxis>
#include <QtMath>
#include<QPieSeries>
#include<QBarSet>
#include<QBarSeries>
#include<QBarCategoryAxis>
QT_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_END_NAMESPACE
product::product(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::product)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:rgb(240,243,248)");


    ui->product_list1->setStyleSheet("border:0px");
    ui->productlist_lab1->setStyleSheet("border:0px");
    ui->tb->setStyleSheet("border:0px");

    connect(ui->product_up_btn4,&QToolButton::clicked,[=](){
        emit sigMaterial_record();
    });




    MakeCharts_bar();
    tbInit();
    MakeCharts_circle();
    MakeCharts_bl();

}
void product::tbInit(){
    QList<QString> product_type;
    product_type<<tr("SIS")<<tr("SBS")<<tr("SEPS")<<tr("SEBS")<<tr("ESIS")<<tr("ESBS")<<tr("SSIS")<<tr("SSBS")<<tr("SSEPS")<<tr("SSEBS");
    QList<QString> product_mark;
    product_mark<<tr("1106")<<tr("4450")<<tr("S1001")<<tr("S4001")<<tr("EI510110")<<tr("EB510112")<<tr("S1-6101")<<tr("S2-6409")<<tr("S1-6112")<<tr("S1-6107");
    QList<QString> product_number;
    product_number<<tr("8A0001")<<tr("8B0001")<<tr("8C0001")<<tr("8D0001")<<tr("8E0001")<<tr("8F0001")<<tr("8G0001")<<tr("8H0001")<<tr("8I0001")<<tr("8J0001");
    QList<QString> product_level;
    product_level<<tr("A")<<tr("A")<<tr("A")<<tr("A")<<tr("A")<<tr("S")<<tr("A")<<tr("S")<<tr("S")<<tr("A");
    QList<QString> product_status;
    product_status<<tr("已入库")<<tr("已售出")<<tr("已售出")<<tr("已入库")<<tr("已入库")<<tr("已入库")<<tr("已入库")<<tr("已入库")<<tr("已入库")<<tr("已售出");
    QList<QString> product_timer;
    product_timer<<tr("20220829")<<tr("20220809")<<tr("20220809")<<tr("20220808")<<tr("20220202")<<tr("20220909")<<tr("20220709")<<tr("20220808")<<tr("20220809")<<tr("20220102");
    QList<QString> product_count;
    product_count<<tr("30")<<tr("300")<<tr("90")<<tr("120")<<tr("120")<<tr("150")<<tr("200")<<tr("210")<<tr("200")<<tr("10");
    QList<QString> product_class;
    product_class<<tr("1")<<tr("2")<<tr("3")<<tr("4")<<tr("4")<<tr("3")<<tr("2")<<tr("1")<<tr("1")<<tr("2");
    //QList<QString> product_plan_number;
    //product_plan_number<<tr("192780")<<tr("145230")<<tr("222200")<<tr("690551")<<tr("172340")<<tr("789788")<<tr("622202")<<tr("320876")<<tr("009080")<<tr("109087");

    QList<QString> numbers;
    numbers<<tr("1")<<tr("2")<<tr("3")<<tr("4")<<tr("5")<<tr("6")<<tr("7")<<tr("8")<<tr("9")<<tr("10");

    ui->tb->verticalHeader()->setHidden(true);
    ui->tb->setRowCount(10);
    ui->tb->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);


    for(int nRow=0;nRow<10;nRow++){
       int nColumn=0;
       QTableWidgetItem*pItem=new QTableWidgetItem(numbers.at(nRow));
       pItem->setFlags(Qt::ItemIsEnabled);
       ui->tb->setItem(nRow,nColumn++,pItem);
       //ui->tb->item(nRow,nColumn)->setTextAlignment(Qt::AlignVCenter);
       ui->tb->setItem(nRow,nColumn++,new QTableWidgetItem(product_type.at(nRow)));
       ui->tb->setItem(nRow,nColumn++,new QTableWidgetItem(product_mark.at(nRow)));
       ui->tb->setItem(nRow,nColumn++,new QTableWidgetItem(product_number.at(nRow)));
       ui->tb->setItem(nRow,nColumn++,new QTableWidgetItem(product_level.at(nRow)));
       ui->tb->setItem(nRow,nColumn++,new QTableWidgetItem(product_status.at(nRow)));
       ui->tb->setItem(nRow,nColumn++,new QTableWidgetItem(product_timer.at(nRow)));
       ui->tb->setItem(nRow,nColumn++,new QTableWidgetItem(product_count.at(nRow)));
       ui->tb->setItem(nRow,nColumn,new QTableWidgetItem(product_class.at(nRow)));
       //ui->tb->setItem(nRow,nColumn,new QTableWidgetItem(product_plan_number.at(nRow)));
    }

}
void product::MakeCharts_circle(){
    ui->product_makecharts1->setStyleSheet("border:0px ");
    QPieSeries *series = new QPieSeries();
    //图标名称,占比
    series->append("SEBS", 7);
    series->append("SBS", 2);
    series->append("SIS", 1);
    series->append("SEPS",2);
    series->setLabelsVisible();

    //设置颜色
    QPieSlice *slice_orange = series->slices().at(0);
    QPieSlice *slice_green = series->slices().at(1);
    QPieSlice *slice_blue = series->slices().at(2);
    QPieSlice*slice_yellow=series->slices().at(3);

    slice_orange->setColor(QColor(252,107,107,255));
    slice_green->setColor(QColor(56,178,141,255));
    slice_blue->setColor(QColor(63,157,211,255));
    slice_yellow->setColor(QColor(232,155,101,255));
    //将series添加到chart中
    //设置图例和标题
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("产品结构");
    chart->legend()->hide();//隐藏图例
    chart->setBackgroundVisible(false);
    ui->product_makecharts1->setChart(chart);

}
void product::MakeCharts_bl(){
    //SEBS折线
    QLineSeries *pLineSeriesOrange = new QLineSeries();
    pLineSeriesOrange->setPen(QPen(QColor(253,107,107,255), 1, Qt::SolidLine));
    QList<QPointF> list;
    list << QPointF(1, 5) << QPointF(3,2) << QPointF(7,6) <<QPointF(10, 8);
    pLineSeriesOrange->append(list);
    pLineSeriesOrange->setName("SEBS");

    //SBS折线
    QLineSeries *pLineSeriesGreen = new QLineSeries();
    pLineSeriesGreen->setPen(QPen(QColor(56,178,141,255), 1, Qt::SolidLine));
    QList<QPointF> list2;
    list2 << QPointF(1, 2) << QPointF(4,4) << QPointF(7,2) <<QPointF(10, 5);
    pLineSeriesGreen->append(list2);
    pLineSeriesGreen->setName("SBS");

    //SIS折线
    QLineSeries *pLineSeriesBlue = new QLineSeries();
    pLineSeriesBlue->setPen(QPen(QColor(63,157,211,255), 1, Qt::SolidLine));
    QList<QPointF> list3;
    list3 << QPointF(1, 7) << QPointF(3,7) << QPointF(6,5) <<QPointF(9, 4);
    pLineSeriesBlue->append(list3);
    pLineSeriesBlue->setName("SIS");

    //红色折线
    QLineSeries *pLineSeriesYellow = new QLineSeries();
    //颜色，线条数量，线型
    pLineSeriesYellow->setPen(QPen(QColor(232,155,101,255), 1, Qt::SolidLine));
    //赋值方式1
    //pLineSeriesYellow->append(1, 1);
    //赋值方式2
    QList<QPointF> list1;
    list1 << QPointF(1, 4) << QPointF(4, 2) << QPointF(7, 1) << QPointF(10, 6);
    pLineSeriesYellow->append(list1);
    //设置图标名称
    pLineSeriesYellow->setName("SEPS");

    //将series添加到chart
    QChart *chart = new QChart();
    chart->addSeries(pLineSeriesOrange);
    chart->addSeries(pLineSeriesGreen);
    chart->addSeries(pLineSeriesBlue);
    chart->addSeries(pLineSeriesYellow);
    //图表标题
    chart->setTitle("近30天生产概况");
    //创建坐标轴
    chart->createDefaultAxes();
    chart->setBackgroundVisible(false);
    ui->product_makecharts2->setChart(chart);
}
void product::MakeCharts_bar(){
    //26-30行 定义了表下方的标签
    QBarSet *set0 = new QBarSet("SIS");
    QBarSet *set1 = new QBarSet("SBS");
    QBarSet *set2 = new QBarSet("SEBS");
    QBarSet *set3 = new QBarSet("SEPS");
    //QBarSet *set4 = new QBarSet("Samantha");

    //33-37行 给柱状赋值
    *set0 << 1 << 1 << 3 << 4 << 5 << 6;
    *set1 << 1 << 1 << 3 << 4 << 5 << 6;
    *set2 << 1 << 1 << 3 << 4 << 5 << 6;
    *set3 << 1 << 1 << 3 << 4 << 5 << 6;
    //*set4 << 1 << 1 << 3 << 4 << 5 << 6;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    //series->append(set4);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("SBC生产计划");
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
    chart->setBackgroundVisible(false);  //去背景
    //chart->setStyleSheet(" background-image:url(:/1.png);");
    ui->product_makecharts3->setChart(chart);
}
product::~product()
{
    delete ui;
}
