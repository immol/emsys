#include "leftbuttongroup.h"
#include "ui_leftbuttongroup.h"

LeftButtonGroup::LeftButtonGroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftButtonGroup)
{
    ui->setupUi(this);
    InitWid();
    connect(ui->deskbtn,&QToolButton::clicked,this,[=]()
    {
        ui->deskbtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->desk->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
        ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        emit sigHome();
    });
    connect(ui->productbtn,&QToolButton::clicked,this,[=]()
    {
        ui->productbtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->product->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
        ui->deskbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->desk->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        emit sigProduct();
    });
    connect(ui->purchasebtn,&QToolButton::clicked,this,[=]()
    {
        ui->deskbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->desk->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->purchase->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
        ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    });
    connect(ui->salesbtn,&QToolButton::clicked,this,[=]()
    {
        ui->deskbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->desk->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->salesbtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->sales->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
        ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    });
    connect(ui->financebtn,&QToolButton::clicked,this,[=]()
    {
        ui->deskbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->desk->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->financebtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->finance->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    });
    connect(ui->inventorybtn,&QToolButton::clicked,this,[=]()
    {
        ui->deskbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->desk->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->inventory->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");

    });
    connect(ui->qualitybtn,&QToolButton::clicked,this,[=]()
    {
        ui->deskbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->desk->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->quality->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
        ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");

    });
    connect(ui->databtn,&QToolButton::clicked,this,[=]()
    {
        ui->deskbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->desk->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
        ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
        ui->databtn->setStyleSheet("background-color: rgb(0,138,96)");
        ui->data->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");

    });

}
void LeftButtonGroup::InitWid(){
    //this->setStyleSheet("background-color:rgb(53,64,82)");

    ui->deskbtn->setStyleSheet("background-color: rgb(0,138,96)");
    ui->desk->setStyleSheet("color: rgb(0,138,96);background-color: rgb(255,255,255)");
    ui->productbtn->setStyleSheet("background-color: rgb(61,74,93)");
    ui->product->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    ui->purchasebtn->setStyleSheet("background-color: rgb(61,74,93)");
    ui->purchase->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    ui->salesbtn->setStyleSheet("background-color: rgb(61,74,93)");
    ui->sales->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    ui->financebtn->setStyleSheet("background-color: rgb(61,74,93)");
    ui->finance->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    ui->inventorybtn->setStyleSheet("background-color: rgb(61,74,93)");
    ui->inventory->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    ui->qualitybtn->setStyleSheet("background-color: rgb(61,74,93)");
    ui->quality->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");
    ui->databtn->setStyleSheet("background-color: rgb(61,74,93)");
    ui->data->setStyleSheet("color: rgb(255,255,255);background-color: rgb(53,64,82)");


}

LeftButtonGroup::~LeftButtonGroup()
{
    delete ui;
}
