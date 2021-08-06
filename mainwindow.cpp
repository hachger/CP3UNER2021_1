#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    counter = 0;

    QTimer1 = new QTimer(this);
    connect(QTimer1, &QTimer::timeout, this, &MainWindow::onQTimer1);

    ui->statusbar->showMessage("Hola Mundo");
}

MainWindow::~MainWindow()
{
    delete QTimer1;
    delete ui;
}

void MainWindow::onQTimer1(){
    counter++;

    if(counter == 100)
        counter = 0;

    ui->lineEdit->setText(QString("%1").arg(counter, 4, 10, QChar('0')));
    ui->lcdNumber->display(QString("%1").arg(counter, 4, 10, QChar('0')));
}


void MainWindow::on_pushButton_clicked()
{
    if(QTimer1->isActive()){
        QTimer1->stop();
        ui->pushButton->setText("ON");
    }
    else{
        QTimer1->start(100);
        ui->pushButton->setText("OFF");
    }
}

