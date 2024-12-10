#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    draw(nullptr)
{
    ui->setupUi(this);    

    connect(ui->showTree,&QPushButton::clicked,this,&MainWindow::draw_tree);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init(){
    f.clear();
    ed.clear();
    res.clear();
    n = m = 0;
    ui->nIpt->clear();
    ui->place1->clear();
    ui->place2->clear();
    ui->distance->clear();
    QMessageBox::information(this,"OK","finished!");
}

int MainWindow::find(int x){
    if(f[x] == x){
        return x;
    }
    return f[x] = find(f[x]);
}

bool MainWindow::span_tree(){
    MyHeap hp;
    for(int i = 0;i<m;i++){
        hp.push(ed[i]);
    }
    int cnt = 0;
    double cost = 0;
    while(hp.Size()>0){
        auto [u,v,dis] = hp.top();
        hp.pop();
        int fu = find(u);
        int fv = find(v);
        if(fu == fv){
            continue;
        }
        res.push_back({u,v});
        f[fv] = fu;
        cost += dis;
        cnt++;
        if(cnt == n-1){
            QMessageBox::information(this,"finish","完成!");
            return true;
        }
    }
    QMessageBox::warning(this,"warning","输入的路径有误，不存在铺设方案!");
    return false;
}

void MainWindow::on_ok1_clicked()
{
    res.clear();
    m = 0;
    ed.clear();
    f.clear();
    n = 0;
    bool ok;
    QString t1 = ui->nIpt->text();
    this->n = t1.toInt(&ok,10);
    if(!ok){
        QMessageBox::warning(this,"Wrong","请输入正确的整数!");
        ui->nIpt->clear();
        return;
    }
    f.resize(n+1);
    for(int i = 1;i<=n;i++){
        f[i] = i;
    }
    ui->nIpt->clear();
}


void MainWindow::on_ok2_clicked()
{
    QString t1 = ui->place1->text(),t2 = ui->place2->text(),t3 = ui->distance->text();
    bool ok1,ok2,ok3;
    int u = t1.toInt(&ok1),v = t2.toInt(&ok2);
    double w = t3.toDouble(&ok3);
    if(!ok1||!ok2||!ok3){
        QMessageBox::warning(this,"warning","请输入正确的数值");
        ui->place1->clear();
        ui->place2->clear();
        ui->distance->clear();
        return;
    }
    ed.push_back({u,v,w});
    m++;
    ui->place1->clear();
    ui->place2->clear();
    ui->distance->clear();
}


void MainWindow::on_ok3_clicked()
{
    span_tree();
}


void MainWindow::on_clr_btn_clicked()
{
    init();
}

void MainWindow::draw_tree(){
    if(!draw){
        draw = new Form();
        draw->show();
    }
    else {
        draw->show();
    }
    draw->draw_tree(res,n,ed);

}
