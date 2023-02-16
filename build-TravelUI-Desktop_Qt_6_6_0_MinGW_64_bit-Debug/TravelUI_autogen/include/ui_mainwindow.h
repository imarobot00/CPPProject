/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *Username;
    QLineEdit *Password;
    QLabel *label_3;
    QLabel *label_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1068, 619);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"font-family: century gothic;\n"
"font-size:15px;\n"
"}\n"
"#MainWindow{\n"
"background:url(E:/TravelUI/back.jpeg);\n"
"}\n"
"QFrame{\n"
"background:rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton{\n"
"border-radius: 60px;\n"
"background:white;\n"
"}\n"
"#label_2{\n"
"background:white;\n"
"background-color:transparent;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"background:white;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../logo.png")));

        horizontalLayout->addWidget(label_2);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("frame{\n"
"background:blue;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 221, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("century-gothic")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("*{\n"
"font-family: century-gothic;\n"
"font-size: 24px;\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 270, 181, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:\n"
"}"));
        Username = new QLineEdit(frame);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(10, 100, 291, 31));
        Password = new QLineEdit(frame);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(10, 190, 291, 34));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 101, 31));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 160, 101, 31));

        horizontalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "             Login Here", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "USERNAME", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
