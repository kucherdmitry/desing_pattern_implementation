#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include "isubject.h"
#include <list>
#include <algorithm>

class WeatherStation : public ISubject
{
private:
    std::list<IObserver*> observers;
    float temperature;
    float humidity;
    float pressure;

public:
    WeatherStation();
    ~WeatherStation() override;

    void registerObserver(IObserver *obs) override;
    void removeObserver(IObserver *obs) override;
    void notifyObserver() override;

    void measurementsChanged();
    void setMeasurements(float temp, float hum, float press);

};

#endif // WEATHERSTATION_H
