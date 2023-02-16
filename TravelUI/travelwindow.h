#ifndef TRAVELWINDOW_H
#define TRAVELWINDOW_H

#include <QMainWindow>

#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QLabel>
namespace Ui {
class travelwindow;
}

class travelwindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void mydbClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool mydbOpen(){
        QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("E:/TravelUI/database/travelui.db");
        if(mydb.open()){
            qDebug() <<"Connection Database connected";
            return true;

        }
        else{
            qDebug() <<"No Connection Database not connected";
            return false;
        }
    }

public:
    explicit travelwindow(QWidget *parent = nullptr);
    ~travelwindow();

private:
    Ui::travelwindow *ui;
};

#endif // TRAVELWINDOW_H
