#include "MyMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyMainWindow myMainWindow ;
    myMainWindow.show();
    return a.exec();
}
