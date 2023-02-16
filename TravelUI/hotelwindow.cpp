#include "hotelwindow.h"
#include "ui_hotelwindow.h"
#include<QMessageBox>
Hotelwindow::Hotelwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hotelwindow)
{
    ui->setupUi(this);


    if(connOpen()){
        qDebug() <<"Connection Database connected";
        ui->label_2 ->setText("Database Connected");
    }
    else{
        qDebug() <<"No Connection Database not connected";
        ui->label_2 ->setText("Database Not Connected");
    }
}

Hotelwindow::~Hotelwindow()
{
    delete ui;
}

void Hotelwindow::on_pushButton_clicked()
{

    QString ID, hotel_name, adress, price, hotel_grades, city, province;
    ID = ui->txt_id->text();
    hotel_name = ui->txt_hotelname->text();
    adress = ui->txt_adress->text();
    price = ui->txt_price->text();
    hotel_grades = ui->txt_grades->text();
    city = ui->txt_city->text();
    province = ui->txt_province->text();
    connOpen();
    QSqlQuery qry;

    qry.prepare("INSERT INTO Hotels (ID, Hotel_Name, Adress, Price, Hotel_Grades, City, Province) VALUES (?,?,?,?,?,?,?)");
    qry.bindValue(0, ID);
    qry.bindValue(1, hotel_name);
    qry.bindValue(2, adress);
    qry.bindValue(3, price);
    qry.bindValue(4, hotel_grades);
    qry.bindValue(5, city);
    qry.bindValue(6, province);

    if (qry.exec()) {
      QMessageBox::critical(this, tr("THE TITLE"), tr("added sucessfully."));
    } else {
      QMessageBox::critical(this, tr("error::"), qry.lastError().text());
    }
    connClose();

}



void Hotelwindow::on_pushButton_load_clicked()
{
   QSqlQueryModel * modal= new QSqlQueryModel;
   connOpen();
   QSqlQuery* qry=new QSqlQuery(db);

   qry->prepare("select * from Hotels");
   qry->exec();
   modal->setQuery(*qry);
   ui->tableView->setModel(modal);
   connClose();
   qDebug()<<(modal->rowCount());


}

void Hotelwindow::on_tableView_activated(const QModelIndex &index)
{
   //To take the value of the index into val
    QString val=ui->tableView->model()->data(index).toString();
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from Hotels where ID='"+val+"' or Hotel_Name='"+val+"' or Adress='"+val+"' or Price='"+val+"' or Hotel_Grades='"+val+"' or City='"+val+"' or Province='"+val+"' ");
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->txt_id->setText(qry.value(0).toString());
            ui->txt_hotelname->setText(qry.value(1).toString());
            ui->txt_adress->setText(qry.value(2).toString());
            ui->txt_price->setText(qry.value(3).toString());
            ui->txt_grades->setText(qry.value(4).toString());
            ui->txt_city->setText(qry.value(5).toString());
            ui->txt_province->setText(qry.value(6).toString());

        }
        connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }


}


void Hotelwindow::on_pushButton_2_clicked()
{
    QString name,bank_no,ID, hotel_name, adress, price, hotel_grades, city, province;
    name=ui->lineEdit_9->text();
    bank_no=ui->lineEdit_8->text();
    ID = ui->txt_id->text();
    hotel_name = ui->txt_hotelname->text();
    adress = ui->txt_adress->text();
    price = ui->txt_price->text();
    hotel_grades = ui->txt_grades->text();
    city = ui->txt_city->text();
    province = ui->txt_province->text();
    connOpen();
    QSqlQuery qry;

    qry.prepare("INSERT INTO HotelBook (Name,Bank_Account_no,ID, Hotel_Name, Adress, Price, Hotel_Grades, City, Province) VALUES (?,?,?,?,?,?,?,?,?)");
    qry.bindValue(0, name);
    qry.bindValue(1, bank_no);
    qry.bindValue(2, ID);
    qry.bindValue(3, hotel_name);
    qry.bindValue(4, adress);
    qry.bindValue(5, price);
    qry.bindValue(6, hotel_grades);
    qry.bindValue(7, city);
    qry.bindValue(8, province);

    if (qry.exec()) {
      QMessageBox::critical(this, tr("THE TITLE"), tr("added sucessfully."));
    } else {
      QMessageBox::critical(this, tr("error::"), qry.lastError().text());
    }
    connClose();

}

