#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QThread>
#include "receivefromaudio.h"
#include "worker.h"
#include"workerthread.h"
#include "controller.h"

class Worker:public QObject
{
    Q_OBJECT
    QThread workerThread;
public slots:
    void doWork();
signals:
    void resultReady( QString result);
};

#endif // WORKER_H
