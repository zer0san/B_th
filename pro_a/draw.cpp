#include "draw.h"
#include "ui_draw.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    //, ui(new Ui::Form)
{
    //ui->setupUi(this);
    //this->resize(600,600);
    scene = new QGraphicsScene(this);
    view = new QGraphicsView(this);
    view->setScene(scene);
    scene->setSceneRect(0,0,800,800);
    this->resize(800,800);
}

Form::~Form()
{
    delete ui;
}

void Form::draw_tree(QVector<QPair<int,int>>res,int n,QVector<edge>g){
    scene->clear();
    int tmp = ceil(qSqrt(n));
    int gap = 700 / tmp;
    int cnt = 0;
    QPen pen(Qt::black,3);
    QBrush brush(Qt::gray);
    QVector<QPointF>points;
    points.push_back(QPointF(0,0));
    for(int i = 1;i<=tmp;i++){
        for(int j = 1;j<=tmp;j++){
            if(cnt>=n){
                break;
            }
            cnt++;
            QPointF point(i*gap,j*gap);
            scene->addEllipse(point.x(),point.y(),50,50,pen,brush);
            QGraphicsTextItem *text = scene->addText(QString::number(cnt));
            text->setPos(point.x()+10,point.y()+10);
            points.push_back(QPointF(i*gap+30,j*gap+30));
        }
    }
    QPen epen(Qt::red,3);
    for(auto ed:res){
        int u = ed.first;
        int v = ed.second;
        scene->addLine(QLineF(points[u],points[v]),epen);
    }
}
