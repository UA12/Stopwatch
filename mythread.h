#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>

class Mythread : public QThread

{
    Q_OBJECT
public:
    explicit Mythread(QObject *parent);
    void run();
    bool stop;

   signals:
    void secChanges(int);
    void minChanges(int);
    void hrsChanges(int);

    public slots:

};

#endif // MYTHREAD_H
