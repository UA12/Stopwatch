#include "mythread.h"
#include <QtCore>

Mythread::Mythread(QObject *parent):
    QThread(parent)
{
}
void Mythread::run()
{

    int min=0;
    int hrs=0;
    for (int i = 0; i++;)
    {
        if(this->stop) break;
        if (i = 60) {
        min++;
        i=0;
        }

        if (min = 60) {
            hrs++;
            min=0;
        }

        emit secChanges(i);
        emit minChanges(min);
        emit hrsChanges(hrs);
    }


}
