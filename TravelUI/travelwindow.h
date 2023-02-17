#ifndef TRAVELWINDOW_H
#define TRAVELWINDOW_H

#include <QMainWindow>

#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>
#include <QLabel>
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>
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
    QSortFilterProxyModel *proxyModel;
public:
    explicit travelwindow(QWidget *parent = nullptr);
    ~travelwindow();

private slots:
    void on_pushButton_clicked();



    void on_search_box_textChanged(const QString &arg1);

private:
    Ui::travelwindow *ui;
};

#endif // TRAVELWINDOW_H
