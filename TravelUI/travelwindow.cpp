#include "travelwindow.h"
#include "ui_travelwindow.h"

travelwindow::travelwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::travelwindow)
{
    ui->setupUi(this);

    if(mydbOpen()){
        qDebug() <<"Connection of Database connected";
        ui->label->setText("Database Connected.");
    }
    else{
        qDebug() <<"No Connection of Database not connected";
        ui->label->setText("Database not Connected.");
    }
}

travelwindow::~travelwindow()
{
    delete ui;
}
