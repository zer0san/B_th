#include "text.h"
#include "ui_text.h"

text::text(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::text)
{
    ui->setupUi(this);
    this->resize(600,600);
    this->setWindowTitle("文字结果展示");
}

text::~text()
{
    delete ui;
}

void text::showTRes(QVector<edge>res){
    ui->textRes->clear();
    QString f;
    double sum = 0;
    for (auto r : res){
        auto [u,v,dis] = r;
        sum += dis;
        QString s = QString("地点 %1  - >  地点 %2, 花费 %3 \n").arg(u).arg(v).arg(dis);
        f += s;
    }
    QString s = QString("总最小花费：%1\n").arg(sum);
    f += s;
    ui->textRes->setText(f);
}
