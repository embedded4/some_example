#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    function();
}

MainWindow::~MainWindow()
{
    delete ui;
}
int a;
char da[10];
void MainWindow::function()
{

    QString na = "\"5234\"";
    QByteArray ba = na.toLatin1();
    char *aa = ba.data();
//    a++;
//    a++;
    da[0] = *(aa+1);
    a = atoi(da);
    qDebug()<<a;


}
