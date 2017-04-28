#ifndef WEATHER_H
#define WEATHER_H

#include <QObject>
#include <QDebug>

class Weather : public QObject
{
    Q_OBJECT
public:
    explicit Weather(QObject *parent = 0);

public slots:
    void displayWeather();
};

#endif // WEATHER_H
