#ifndef SENDRESULT_H
#define SENDRESULT_H

#include <QObject>
#include <QSharedMemory>

class SendToAudio:public QObject
{
    Q_OBJECT
public:
    SendToAudio();

public slots:
    void writeSharedMemory(QString event);

private:
    QSharedMemory sharedMemory;
};

#endif // SENDRESULT_H
