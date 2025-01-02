#ifndef TEXT_H
#define TEXT_H

#include <QWidget>
#include "edge.h"

namespace Ui {
class text;
}

class text : public QWidget
{
    Q_OBJECT

public:
    explicit text(QWidget *parent = nullptr);
    ~text();
    void showTRes(QVector<edge>res);

private:
    Ui::text *ui;
};

#endif // TEXT_H
