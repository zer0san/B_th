#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QVector>
#include <QPainter>
#include "edge.h"
#include <QtMath>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    void draw_tree(QVector<edge>res,int n,QVector<edge>g);

private:
    Ui::Form *ui;
    QGraphicsScene *scene;
    QGraphicsView *view;
};

#endif // DRAW_H
