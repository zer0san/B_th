#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_b_cmake_th.h"

QT_BEGIN_NAMESPACE
namespace Ui { class b_cmake_thClass; };
QT_END_NAMESPACE

class b_cmake_th : public QMainWindow
{
    Q_OBJECT

public:
    b_cmake_th(QWidget *parent = nullptr);
    ~b_cmake_th();

private:
    Ui::b_cmake_thClass *ui;
};
