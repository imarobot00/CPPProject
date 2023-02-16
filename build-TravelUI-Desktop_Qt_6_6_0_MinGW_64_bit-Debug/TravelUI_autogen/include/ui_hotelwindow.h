/********************************************************************************
** Form generated from reading UI file 'hotelwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELWINDOW_H
#define UI_HOTELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotelwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txt_id;
    QLineEdit *txt_hotelname;
    QLineEdit *txt_adress;
    QLineEdit *txt_price;
    QLineEdit *txt_grades;
    QLineEdit *txt_city;
    QLineEdit *txt_province;
    QLabel *label_3;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_load;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Hotelwindow)
    {
        if (Hotelwindow->objectName().isEmpty())
            Hotelwindow->setObjectName("Hotelwindow");
        Hotelwindow->resize(1333, 703);
        centralwidget = new QWidget(Hotelwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 571, 101));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 620, 181, 41));
        txt_id = new QLineEdit(centralwidget);
        txt_id->setObjectName("txt_id");
        txt_id->setGeometry(QRect(130, 130, 141, 31));
        txt_hotelname = new QLineEdit(centralwidget);
        txt_hotelname->setObjectName("txt_hotelname");
        txt_hotelname->setGeometry(QRect(130, 170, 251, 31));
        txt_adress = new QLineEdit(centralwidget);
        txt_adress->setObjectName("txt_adress");
        txt_adress->setGeometry(QRect(130, 210, 251, 31));
        txt_price = new QLineEdit(centralwidget);
        txt_price->setObjectName("txt_price");
        txt_price->setGeometry(QRect(130, 250, 251, 31));
        txt_grades = new QLineEdit(centralwidget);
        txt_grades->setObjectName("txt_grades");
        txt_grades->setGeometry(QRect(130, 290, 251, 31));
        txt_city = new QLineEdit(centralwidget);
        txt_city->setObjectName("txt_city");
        txt_city->setGeometry(QRect(130, 330, 251, 31));
        txt_province = new QLineEdit(centralwidget);
        txt_province->setObjectName("txt_province");
        txt_province->setGeometry(QRect(130, 370, 251, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 420, 231, 41));
        lineEdit_8 = new QLineEdit(centralwidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(130, 500, 251, 31));
        lineEdit_9 = new QLineEdit(centralwidget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(130, 460, 251, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 130, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 166, 91, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 210, 111, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 250, 71, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 290, 91, 21));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 330, 61, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(38, 370, 81, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(60, 460, 61, 16));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(8, 500, 111, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 330, 121, 71));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(760, 140, 521, 261));
        pushButton_load = new QPushButton(centralwidget);
        pushButton_load->setObjectName("pushButton_load");
        pushButton_load->setGeometry(QRect(930, 410, 191, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 540, 161, 51));
        Hotelwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Hotelwindow);
        statusbar->setObjectName("statusbar");
        Hotelwindow->setStatusBar(statusbar);

        retranslateUi(Hotelwindow);

        QMetaObject::connectSlotsByName(Hotelwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Hotelwindow)
    {
        Hotelwindow->setWindowTitle(QCoreApplication::translate("Hotelwindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Hotelwindow", "          Please Choose Your Hotel", nullptr));
        label_2->setText(QCoreApplication::translate("Hotelwindow", "Status", nullptr));
        label_3->setText(QCoreApplication::translate("Hotelwindow", "Please enter your details", nullptr));
        label_4->setText(QCoreApplication::translate("Hotelwindow", "ID", nullptr));
        label_5->setText(QCoreApplication::translate("Hotelwindow", "Hotel Name", nullptr));
        label_6->setText(QCoreApplication::translate("Hotelwindow", "    Hotel Adress", nullptr));
        label_7->setText(QCoreApplication::translate("Hotelwindow", "Price", nullptr));
        label_8->setText(QCoreApplication::translate("Hotelwindow", "Hotel Grades", nullptr));
        label_9->setText(QCoreApplication::translate("Hotelwindow", "City", nullptr));
        label_10->setText(QCoreApplication::translate("Hotelwindow", "Province", nullptr));
        label_11->setText(QCoreApplication::translate("Hotelwindow", "Name", nullptr));
        label_12->setText(QCoreApplication::translate("Hotelwindow", "Bank Account No", nullptr));
        pushButton->setText(QCoreApplication::translate("Hotelwindow", "SAVE NEW DATA", nullptr));
        pushButton_load->setText(QCoreApplication::translate("Hotelwindow", "LOAD DATA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Hotelwindow", "BOOK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hotelwindow: public Ui_Hotelwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELWINDOW_H
