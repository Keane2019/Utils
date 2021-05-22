#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    model(new QStandardItemModel)
{
    ui->setupUi(this);
}

void MainWindow::SetupTable()
{
    ui->tableView->setModel(model);
    model->setHorizontalHeaderItem(0, new QStandardItem("a"));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Dialog* dlg = new Dialog;
    dlg->show();
}
