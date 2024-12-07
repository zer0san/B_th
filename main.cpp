#include "stdafx.h"
#include "b_cmake_th.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    b_cmake_th w;
    w.show();
    return a.exec();
}
