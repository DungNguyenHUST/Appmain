#include "workerthread.h"

void WorkerThread::run()
{
    QString result;
    /* expensive or blocking operation  */
    emit resultReady(result);
}


