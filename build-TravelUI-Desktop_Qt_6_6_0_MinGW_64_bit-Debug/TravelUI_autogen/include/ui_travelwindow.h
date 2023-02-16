/********************************************************************************
** Form generated from reading UI file 'travelwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVELWINDOW_H
#define UI_TRAVELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_travelwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *search_box;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *travelwindow)
    {
        if (travelwindow->objectName().isEmpty())
            travelwindow->setObjectName("travelwindow");
        travelwindow->resize(831, 747);
        centralwidget = new QWidget(travelwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 610, 151, 51));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(25, 60, 791, 241));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 310, 211, 51));
        search_box = new QLineEdit(centralwidget);
        search_box->setObjectName("search_box");
        search_box->setGeometry(QRect(120, 20, 481, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 20, 71, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(610, 25, 61, 21));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(660, 20, 151, 31));
        travelwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(travelwindow);
        statusbar->setObjectName("statusbar");
        travelwindow->setStatusBar(statusbar);

        retranslateUi(travelwindow);

        QMetaObject::connectSlotsByName(travelwindow);
    } // setupUi

    void retranslateUi(QMainWindow *travelwindow)
    {
        travelwindow->setWindowTitle(QCoreApplication::translate("travelwindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("travelwindow", "STATUS", nullptr));
        pushButton->setText(QCoreApplication::translate("travelwindow", "LOAD DATA", nullptr));
        label_2->setText(QCoreApplication::translate("travelwindow", "       SEARCH", nullptr));
        label_3->setText(QCoreApplication::translate("travelwindow", "FILTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class travelwindow: public Ui_travelwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVELWINDOW_H
