#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_login_clicked()
{
    QString tn = ui->nInput->text();
    QString tm = ui->mInput->text();
    int n = tn.toInt();
    int m = tm.toInt();

}

