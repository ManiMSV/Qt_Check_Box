#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBox_accepted()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if (username=="mani"&&password=="Qwerty@123"){
        QMessageBox::information(this,"Login Sucess",username+" welcome!");
    }
    else{
        QMessageBox::information(this,"","Invaild Information");
    }
}


void MainWindow::on_buttonBox_rejected()
{

}

