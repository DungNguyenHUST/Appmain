#include "sendtoaudio.h"
#include "receivefromaudio.h"
#include <QBuffer>
#include <QtCore/QDebug>
#include<QDataStream>

SendToAudio::SendToAudio()
{

}

void SendToAudio::writeSharedMemory()
{
    sharedMemory.setKey("server 1");

    QString event = "Hi";
    // load into shared memory
    QBuffer buffer;
    buffer.open(QBuffer::ReadWrite);
    QDataStream out(&buffer);
    out << event;
    int size = buffer.size();

    if (!sharedMemory.create(size))
    {
        qDebug()<<"Unable to create shared memory segment.";
        return;
    }
    sharedMemory.lock();
    char *to = (char*)sharedMemory.data();
    const char *from = buffer.data().data();
    memcpy(to, from, qMin(sharedMemory.size(), size));
    sharedMemory.unlock();
}
