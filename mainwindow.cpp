#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonName_clicked()
{
    //get the existing value of the labelHello and assign it to a string variable
    QString newLabel = ui->labelHello->text();

    //ui->labelHello->setText(newLabel + " , how are you????");
    ui->labelHello->setText(ui->labelHello->text() + " " + ui->lineEditName->text());
}

void MainWindow::on_pushButtonClear_clicked()
{
    ui->labelHello->setText("Welcome to Qt Development ");
}
