/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homewindow
{
public:
    QWidget *centralwidget;
    QFrame *homeframe;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homewindow)
    {
        if (Homewindow->objectName().isEmpty())
            Homewindow->setObjectName("Homewindow");
        Homewindow->resize(1311, 759);
        Homewindow->setStyleSheet(QString::fromUtf8("#Homewindow{\n"
"background:url(E:/TravelUI/login_pic.jpg);\n"
"}\n"
"#homeframe{\n"
"background: skyblue;\n"
"}"));
        centralwidget = new QWidget(Homewindow);
        centralwidget->setObjectName("centralwidget");
        homeframe = new QFrame(centralwidget);
        homeframe->setObjectName("homeframe");
        homeframe->setGeometry(QRect(50, 40, 1281, 601));
        homeframe->setCursor(QCursor(Qt::ArrowCursor));
        homeframe->setFrameShape(QFrame::StyledPanel);
        homeframe->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(homeframe);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 50, 341, 201));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(homeframe);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(930, 50, 341, 201));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(homeframe);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(170, 330, 881, 251));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(homeframe);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(520, 50, 341, 201));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        Homewindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Homewindow);
        statusbar->setObjectName("statusbar");
        Homewindow->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButton_3, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_2);

        retranslateUi(Homewindow);

        QMetaObject::connectSlotsByName(Homewindow);
    } // setupUi

    void retranslateUi(QMainWindow *Homewindow)
    {
        Homewindow->setWindowTitle(QCoreApplication::translate("Homewindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Homewindow", "PLACES TO VISIT AROUND NEPAL", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Homewindow", "TICKET BOOKINGS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Homewindow", "PLAN YOUR TRIP", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Homewindow", "HOTEL BOOKINGS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homewindow: public Ui_Homewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
