#include "worker.h"

void Worker::doWork()
{
    QString result;
    ReceiveFromAudio receiveFromAudio;
    while(true)
    {
        receiveFromAudio.loadFromMemory();
    }
    emit resultReady(result);
}
