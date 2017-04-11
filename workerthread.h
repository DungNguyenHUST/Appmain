#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QObject>
#include "worker.h"
#include "controller.h"
#include "receivefromaudio.h"
#include "QThread"

class WorkerThread : public QThread
{
    Q_OBJECT
    void run();
    signals:
        void resultReady(QString s);
};

#endif // WORKERTHREAD_H
