#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->fileButton, &QPushButton::clicked, this,[this](){
        QString fileName = QFileDialog::getOpenFileName(this, "选择文件", "./");

        ui->lineEdit->setText(fileName);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

