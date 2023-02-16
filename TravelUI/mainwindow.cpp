#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "homewindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
     QString username= ui->Username->text();
     QString password= ui->Password->text();

     if(username=="Bipul" && password=="Dahal")
     {
        hide();
        homewindow= new Homewindow(this);
        homewindow->show();

     }
     else
     {
         QMessageBox::warning(this,"incorrect","Username and Password is Incorrect.");
     }
}

