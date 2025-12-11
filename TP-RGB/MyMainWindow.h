#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyMainWindow;
}
QT_END_NAMESPACE

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

private slots:

    void on_verticalSlider_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

    void on_verticalSlider_2_valueChanged(int value);

    void on_spinBox_2_valueChanged(int arg1);

    void on_verticalSlider_3_valueChanged(int value);

    void on_spinBox_3_valueChanged(int arg1);

    //void RedAjust(int value);

   // void GreenAjust(int value);

    //void BlueAjust(int value);

private:
    Ui::MyMainWindow *ui;
};
#endif // MYMAINWINDOW_H
