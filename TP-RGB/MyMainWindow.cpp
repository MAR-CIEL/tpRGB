#include "MyMainWindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
    ui->verticalSlider->setStyleSheet("Qslider::handle:vertical{ background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 white, stop:1 red); border: 1px solid #999999; border-radius: 5px;}");
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}







void MyMainWindow::on_verticalSlider_customContextMenuRequested(const QPoint &pos)
{

}

