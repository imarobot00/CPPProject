#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>
#include "hotelwindow.h"
#include "travelwindow.h"
namespace Ui {
class Homewindow;
}

class Homewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Homewindow(QWidget *parent = nullptr);
    ~Homewindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Homewindow *ui;
    Hotelwindow *hotelwindow;
    travelwindow *Travelwindow;
};

#endif // HOMEWINDOW_H
