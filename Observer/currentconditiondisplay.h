#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H

#include "iobserver.h"
#include "idisplayelement.h"
#include "weatherstation.h"
#include <iostream>

class CurrentConditionDisplay : public IObserver, public IDisplayElement
{
private:
    float temperature;
    float humidity;

public:
    CurrentConditionDisplay(WeatherStation &weatherData);
    ~CurrentConditionDisplay() override = default;

    void display() override;
    void update(float temp, float humidity, float pressure) override;
};

#endif // CURRENTCONDITIONDISPLAY_H
