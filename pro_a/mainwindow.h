#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <myheap.h>
#include <edge.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include "draw.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int n,m;
    QVector<int>f;
    QVector<edge>ed;
    QVector<QPair<int,int>>res;
    void init();
    bool span_tree();
    int find(int x);


private slots:
    void on_ok1_clicked();

    void on_ok2_clicked();

    void on_ok3_clicked();

    void on_clr_btn_clicked();

    void draw_tree();

private:
    Ui::MainWindow *ui;
    Form* draw;
};
#endif // MAINWINDOW_H
