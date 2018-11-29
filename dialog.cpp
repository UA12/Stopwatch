#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    mthread=new Mythread(this);
    connect(mthread,SIGNAL(secChanges(int)), this, SLOT(onsecChanges(int)));
    connect(mthread,SIGNAL(minChanges(int)), this, SLOT(onminChanges(int)));
    connect(mthread,SIGNAL(hrsChanges(int)), this, SLOT(onhrsChanges(int)));
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::onsecChanges(int sec)
{
 ui->secs->display(sec);
}
void Dialog::onminChanges(int min)
{
 ui->secs->display(min);
}
void Dialog::onhrsChanges(int hrs)
{
 ui->secs->display(hrs);
}

void Dialog::on_start_clicked()
{
    mthread->start();
}

void Dialog::on_stop_clicked()
{
    mthread->stop = true;
}
