#include "thread.h"

Thread::Thread()
{

}

void Thread::run()
{
    QTimer timer;
    ReceiveFromAudio receiveFromAudio;
    QObject::connect(&timer,QTimer::timeout, &receiveFromAudio, ReceiveFromAudio::readSharedMemory);
    timer.start(10);
    exec();
}
