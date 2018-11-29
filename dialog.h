#ifndef DIALOG_H
#define DIALOG_H
#include "mythread.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    Mythread *mthread;

private:
    Ui::Dialog *ui;

public slots:
    void onsecChanges(int);
    void onminChanges(int);
    void onhrsChanges(int);
private slots:
    void on_start_clicked();
    void on_stop_clicked();
};

#endif // DIALOG_H
