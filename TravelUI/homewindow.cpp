#include "homewindow.h"
#include "ui_homewindow.h"

Homewindow::Homewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Homewindow)
{
    ui->setupUi(this);

}

Homewindow::~Homewindow()
{
    delete ui;
}

void Homewindow::on_pushButton_4_clicked()
{
    hotelwindow = new Hotelwindow(this);
    hide();
    hotelwindow->show();

}



void Homewindow::on_pushButton_2_clicked()
{
    Travelwindow = new travelwindow(this);
    hide();
    Travelwindow->show();
}

