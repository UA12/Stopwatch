#include "mythread.h"
#include <QtCore>
#include <QThread>
#include <QObject>

Mythread::Mythread(QObject *parent):
    QThread(parent)
{
}
void Mythread::run()
{

    int min=0;
    int hrs=0;
    for (int i = 0;; i++)
    {
        sleep(1);
        QMutex mutex;
        mutex.lock();
        if(this->stop) break;
        if (i == 60) {
        min++;
        i=0;
        }

        if (min == 60) {
            hrs++;
            min=0;
        }
        mutex.unlock();

        emit secChanges(i);
        emit minChanges(min);
        emit hrsChanges(hrs);
    }


}
