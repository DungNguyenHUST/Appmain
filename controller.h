#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QThread>
#include "receivefromaudio.h"
#include "worker.h"
#include "workerthread.h"

class Controller:public QObject
{
    Q_OBJECT
    QThread workerThread;
public:
    Controller();
    ~Controller();
public slots:
    void handleResults( QString);
signals:
    void operate( QString );
};

#endif // CONTROLLER_H
