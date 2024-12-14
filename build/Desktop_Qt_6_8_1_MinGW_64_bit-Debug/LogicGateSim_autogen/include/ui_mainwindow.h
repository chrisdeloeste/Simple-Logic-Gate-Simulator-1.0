/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *InputA;
    QLabel *InputB;
    QLineEdit *lineEdit_A;
    QLineEdit *lineEdit_B;
    QPushButton *andgateBttn;
    QLabel *gatelabel;
    QLabel *label_result;
    QPushButton *orgateBttn;
    QPushButton *notgateBttn;
    QPushButton *nandgateBttn;
    QPushButton *buffergateBttn;
    QPushButton *norgateBttn;
    QPushButton *xorgateBttn;
    QPushButton *xnorgateBttn;
    QLabel *label;
    QLabel *boolexplabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(473, 349);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        InputA = new QLabel(centralwidget);
        InputA->setObjectName("InputA");
        InputA->setGeometry(QRect(60, 130, 49, 16));
        InputB = new QLabel(centralwidget);
        InputB->setObjectName("InputB");
        InputB->setGeometry(QRect(60, 190, 49, 16));
        lineEdit_A = new QLineEdit(centralwidget);
        lineEdit_A->setObjectName("lineEdit_A");
        lineEdit_A->setGeometry(QRect(60, 110, 41, 24));
        lineEdit_B = new QLineEdit(centralwidget);
        lineEdit_B->setObjectName("lineEdit_B");
        lineEdit_B->setGeometry(QRect(60, 170, 41, 24));
        andgateBttn = new QPushButton(centralwidget);
        andgateBttn->setObjectName("andgateBttn");
        andgateBttn->setGeometry(QRect(70, 240, 80, 24));
        gatelabel = new QLabel(centralwidget);
        gatelabel->setObjectName("gatelabel");
        gatelabel->setGeometry(QRect(110, 90, 251, 121));
        gatelabel->setScaledContents(true);
        label_result = new QLabel(centralwidget);
        label_result->setObjectName("label_result");
        label_result->setGeometry(QRect(370, 140, 49, 16));
        orgateBttn = new QPushButton(centralwidget);
        orgateBttn->setObjectName("orgateBttn");
        orgateBttn->setGeometry(QRect(160, 240, 80, 24));
        notgateBttn = new QPushButton(centralwidget);
        notgateBttn->setObjectName("notgateBttn");
        notgateBttn->setGeometry(QRect(250, 240, 80, 24));
        nandgateBttn = new QPushButton(centralwidget);
        nandgateBttn->setObjectName("nandgateBttn");
        nandgateBttn->setGeometry(QRect(70, 270, 80, 24));
        buffergateBttn = new QPushButton(centralwidget);
        buffergateBttn->setObjectName("buffergateBttn");
        buffergateBttn->setGeometry(QRect(340, 240, 80, 24));
        norgateBttn = new QPushButton(centralwidget);
        norgateBttn->setObjectName("norgateBttn");
        norgateBttn->setGeometry(QRect(160, 270, 80, 24));
        xorgateBttn = new QPushButton(centralwidget);
        xorgateBttn->setObjectName("xorgateBttn");
        xorgateBttn->setGeometry(QRect(250, 270, 80, 24));
        xnorgateBttn = new QPushButton(centralwidget);
        xnorgateBttn->setObjectName("xnorgateBttn");
        xnorgateBttn->setGeometry(QRect(340, 270, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 40, 131, 16));
        boolexplabel = new QLabel(centralwidget);
        boolexplabel->setObjectName("boolexplabel");
        boolexplabel->setGeometry(QRect(260, 40, 141, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 473, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        InputA->setText(QCoreApplication::translate("MainWindow", "Input A", nullptr));
        InputB->setText(QCoreApplication::translate("MainWindow", "Input B", nullptr));
        andgateBttn->setText(QCoreApplication::translate("MainWindow", "AND Gate", nullptr));
        gatelabel->setText(QString());
        label_result->setText(QString());
        orgateBttn->setText(QCoreApplication::translate("MainWindow", "OR Gate", nullptr));
        notgateBttn->setText(QCoreApplication::translate("MainWindow", "NOT Gate", nullptr));
        nandgateBttn->setText(QCoreApplication::translate("MainWindow", "NAND Gate", nullptr));
        buffergateBttn->setText(QCoreApplication::translate("MainWindow", "BUFFER Gate", nullptr));
        norgateBttn->setText(QCoreApplication::translate("MainWindow", "NOR Gate", nullptr));
        xorgateBttn->setText(QCoreApplication::translate("MainWindow", "XOR Gate", nullptr));
        xnorgateBttn->setText(QCoreApplication::translate("MainWindow", "XNOR Gate", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Boolean Expression:", nullptr));
        boolexplabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
