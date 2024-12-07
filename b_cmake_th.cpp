#include "stdafx.h"
#include "b_cmake_th.h"

b_cmake_th::b_cmake_th(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::b_cmake_thClass())
{
    ui->setupUi(this);
}

b_cmake_th::~b_cmake_th()
{
    delete ui;
}
