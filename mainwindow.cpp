#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Simple Logic Gate Simulator"); //set program name

    //ui pushbutton to logic gate operation functinos
    connect(ui->andgateBttn, &QPushButton::clicked, this, &MainWindow::calculateAndGate);
    connect(ui->orgateBttn, &QPushButton::clicked, this, &MainWindow::calculateOrGate);
    connect(ui->notgateBttn, &QPushButton::clicked, this, &MainWindow::calculateNotGate);
    connect(ui->buffergateBttn, &QPushButton::clicked, this, &MainWindow::calculateBufferGate);
    connect(ui->nandgateBttn, &QPushButton::clicked, this, &MainWindow::calculateNandGate);
    connect(ui->norgateBttn, &QPushButton::clicked, this, &MainWindow::calculateNorGate);
    connect(ui->xorgateBttn, &QPushButton::clicked, this, &MainWindow::calculateXorGate);
    connect(ui->xnorgateBttn, &QPushButton::clicked, this, &MainWindow::calculateXnorGate);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculateAndGate()
{
    QPixmap pixmap(":/images/images/andgate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text(); //text from ui to string

    if ((inputA != "0" && inputA != "1") || (inputB != "0" && inputB != "1")) {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for both inputs.");
        return;
    } //check if inputs are 0 or 1

    int a = inputA.toInt();
    int b = inputB.toInt(); //stirng to int

    int result = a & b; //logic gate operation

    ui->label_result->setText(QString("Y: %1").arg(result)); //display result to label
    ui->boolexplabel->setText("Y = A.B"); //boolean expression
}

void MainWindow::calculateOrGate()
{
    QPixmap pixmap(":/images/images/orgate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text(); //text from ui to string

    if ((inputA != "0" && inputA != "1") || (inputB != "0" && inputB != "1")) {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for both inputs.");
        return;
    } //check if inputs are 0 or 1

    int a = inputA.toInt();
    int b = inputB.toInt(); //stirng to int

    int result = a | b;  //logic gate operation

    ui->label_result->setText(QString("Y: %1").arg(result)); //display result to label
    ui->boolexplabel->setText("Y = A+B");
}

void MainWindow::calculateNotGate()
{
    QPixmap pixmap(":/images/images/notgate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text();    //text from ui to string
    int result;

    if ((inputA == "0" || inputA == "1") && (inputB == "0" || inputB == "1"))
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for input A.");
        return;
    } //do not allow two inputs

    else if (inputA != "0" || inputA != "1")
    {
        QString result = (inputA == "0") ? "1" : "0"; //not gate operation
        ui->label_result->setText("Y: " + result); //display result to label
        ui->boolexplabel->setText("Y = Ā"); //boolean expression
    }

}

void MainWindow::calculateBufferGate()
{
    QPixmap pixmap(":/images/images/buffergate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text();    //text from ui to string
    int result;

    if ((inputA == "0" || inputA == "1") && (inputB == "0" || inputB == "1"))
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for input A.");
        return;
    } //do not allow two inputs

    else if (inputA == "0" || inputA == "1")
    {
        QString result = inputA; //buffer gate operation
        ui->label_result->setText("A: " + result); //display result to label
        ui->boolexplabel->setText("Y = A"); //boolean expression
    }

}

void MainWindow::calculateNandGate()
{
    QPixmap pixmap(":/images/images/nandgate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text(); //text from ui to string

    if ((inputA != "0" && inputA != "1") || (inputB != "0" && inputB != "1")) {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for both inputs.");
        return;
    } //check if inputs are 0 or 1

    int a = inputA.toInt();
    int b = inputB.toInt(); //stirng to int

    int result = !(a & b); //logic gate operation

    ui->label_result->setText(QString("Y: %1").arg(result)); //display result to label
    ui->boolexplabel->setText("Y = <span style='text-decoration: overline;'>A.B</span>"); //boolean expression
}

void MainWindow::calculateNorGate()
{
    QPixmap pixmap(":/images/images/norgate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text(); //text from ui to string

    if ((inputA != "0" && inputA != "1") || (inputB != "0" && inputB != "1")) {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for both inputs.");
        return;
    } //check if inputs are 0 or 1

    int a = inputA.toInt();
    int b = inputB.toInt(); //stirng to int

    int result = !(a || b);  //logic gate operation

    ui->label_result->setText(QString("Y: %1").arg(result)); //display result to label
    ui->boolexplabel->setText("Y = <span style='text-decoration: overline;'>A+B</span>"); //boolean expression
}

void MainWindow::calculateXorGate()
{
    QPixmap pixmap(":/images/images/xorgate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text(); //text from ui to string

    if ((inputA != "0" && inputA != "1") || (inputB != "0" && inputB != "1")) {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for both inputs.");
        return;
    } //check if inputs are 0 or 1

    int a = inputA.toInt();
    int b = inputB.toInt(); //stirng to int

    int result = a ^ b;  //logic gate operation

    ui->label_result->setText(QString("Y: %1").arg(result)); //display result to label
    ui->boolexplabel->setText("Y = <span style='text-decoration: overline;'>A</span>B + A<span style='text-decoration: overline;'>B</span>"); //boolean expression

}

void MainWindow::calculateXnorGate()
{
    QPixmap pixmap(":/images/images/xnorgate.png");
    ui->gatelabel->setPixmap(pixmap);
    ui->gatelabel->setScaledContents(true); //map image to label and scale

    QString inputA = ui->lineEdit_A->text();
    QString inputB = ui->lineEdit_B->text(); //text from ui to string

    if ((inputA != "0" && inputA != "1") || (inputB != "0" && inputB != "1")) {
        QMessageBox::warning(this, "Invalid Input", "Please enter only 0 or 1 for both inputs.");
        return;
    } //check if inputs are 0 or 1

    int a = inputA.toInt();
    int b = inputB.toInt(); //stirng to int

    int result = !(a ^ b);  //logic gate operation

    ui->label_result->setText(QString("Y: %1").arg(result)); //display result to label
    ui->boolexplabel->setText("Y = AB + <span style='text-decoration: overline;'>AB</span>"); //boolean expression
}



