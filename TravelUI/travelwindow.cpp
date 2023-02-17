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

void travelwindow::on_pushButton_clicked()
{
    mydbOpen();
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT * FROM Transportation", mydb);

        // Only create the proxy model if it doesn't already exist
        if (!proxyModel) {
            proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(model);
            proxyModel->sort(2, Qt::AscendingOrder);
            proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
        }

        ui->tableView->setModel(proxyModel);
        ui->comboBox->addItems(QStringList() << "Id" << "Location" << "Destination");
        mydbClose();
}



void travelwindow::on_search_box_textChanged(const QString &arg1)
{
    proxyModel->setFilterFixedString(arg1);
}

