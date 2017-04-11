#include "controller.h"

Controller::Controller()
{
Worker *worker= new Worker;
 worker->moveToThread(&workerThread);
 connect(&workerThread, SIGNAL(finished()), worker, SLOT(deleteLater()));
connect(this, SIGNAL(operate(QString)), worker, SLOT(doWork()));
connect(worker, SIGNAL(resultReady(QString)), this, SLOT(handleResults(QString)));
workerThread.start();
}

Controller::~Controller()
{
    workerThread.quit();
    workerThread.wait();

}

