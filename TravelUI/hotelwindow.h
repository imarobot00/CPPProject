#ifndef HOTELWINDOW_H
#define HOTELWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QLabel>
namespace Ui {
class Hotelwindow;
}

class Hotelwindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    void connClose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("E:/TravelUI/database/travelui.db");
        if(db.open()){
            qDebug() <<"Connection Database connected";
            return true;

        }
        else{
            qDebug() <<"No Connection Database not connected";
            return false;
        }
    }

public:
    explicit Hotelwindow(QWidget *parent = nullptr);
    ~Hotelwindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_load_clicked();



    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::Hotelwindow *ui;

};

#endif // HOTELWINDOW_H
