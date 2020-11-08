#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"

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


void MainWindow::on_pushButton_clicked()
{
Client c;
c.setCin(ui->lineEditCin->text());
c.setNom(ui->lineEditNom->text());
c.setPrenom(ui->lineEditPrenom->text());
}
