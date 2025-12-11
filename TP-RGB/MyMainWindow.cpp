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




void MyMainWindow::on_verticalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
    connect(ui->verticalSlider, SIGNAL(valueChanged), this, SLOT(RedAdjust(int Value)));
}


void MyMainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->verticalSlider->setSliderPosition(arg1);
}


void MyMainWindow::on_verticalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(value);
    connect(ui->verticalSlider_2, SIGNAL(valueChanged), SLOT(GreenAdjust(int Value)));
}


void MyMainWindow::on_spinBox_2_valueChanged(int arg1)
{
    ui->verticalSlider_2->setSliderPosition(arg1);
}


void MyMainWindow::on_verticalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(value);
    connect(ui->verticalSlider_3, SIGNAL(valueChanged), this, SLOT(BlueAdjust(int Value)));
}




void MyMainWindow::on_spinBox_3_valueChanged(int arg1)
{
     ui->verticalSlider_3->setSliderPosition(arg1);
}

