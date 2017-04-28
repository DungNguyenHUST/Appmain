#include "sendtoaudio.h"
#include "receivefromaudio.h"
#include <QBuffer>
#include <QtCore/QDebug>
#include<QDataStream>

SendToAudio::SendToAudio()
{

}

void SendToAudio::writeSharedMemory(QString event)
{
    if (event =="played")
    {
         sharedMemory.setKey("server7");
    }
    else if (event =="stopped")
    {
         sharedMemory.setKey("server8");
    }
    else if (event =="nexted")
    {
         sharedMemory.setKey("server9");
    }
    else if (event =="added")
    {
         sharedMemory.setKey("server10");
    }
    else if (event =="paused")
    {
        sharedMemory.setKey("server11");
    }
    else if (event=="runclimate")
    {
        sharedMemory.setKey ("server12");
    }
   // sharedMemory.setKey("server1");
    QBuffer buffer;
    buffer.open(QBuffer::ReadWrite);
    QDataStream out(&buffer);
    out << event;
    int size = buffer.size();

    if (!sharedMemory.create(size))
    {
        //qDebug()<<"Unable to create shared memory segment";
        return;
    }
    sharedMemory.lock();
    char *to = (char*)sharedMemory.data();
    const char *from = buffer.data().data();
    memcpy(to, from, qMin(sharedMemory.size(), size));
    sharedMemory.unlock();
    buffer.close();
    if (!sharedMemory.isAttached())
    {
        qDebug()<<"write to sharedmemory is complete";
        return;
    }
}
