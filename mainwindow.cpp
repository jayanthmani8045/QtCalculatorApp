#include "mainwindow.h"
#include "ui_mainwindow.h"

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

int firstnum, secnum, result;

void MainWindow::on_BtnAdd_clicked()
{
    firstnum = ui->firstnum->text().toInt();
    secnum = ui->secnum->text().toInt();
    result = firstnum+secnum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_BtnSub_clicked()
{
    firstnum = ui->firstnum->text().toInt();
    secnum = ui->secnum->text().toInt();
    result = firstnum-secnum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_BtnDiv_clicked()
{
    firstnum = ui->firstnum->text().toInt();
    secnum = ui->secnum->text().toInt();
    result = firstnum/secnum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_BtnMul_clicked()
{
    firstnum = ui->firstnum->text().toInt();
    secnum = ui->secnum->text().toInt();
    result = firstnum*secnum;
    ui->result->setText(QString::number(result));
}

