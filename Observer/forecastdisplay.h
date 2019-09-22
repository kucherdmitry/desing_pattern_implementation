#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "iobserver.h"
#include "idisplayelement.h"
#include "weatherstation.h"
#include <iostream>

class ForecastDisplay : public IObserver, public IDisplayElement
{
private:
    float pressure;
public:
    ForecastDisplay(WeatherStation &weatherData);
    ~ForecastDisplay() override;

    void display() override;
    void update(float temp, float humidity, float pressure) override;
};

#endif // FORECASTDISPLAY_H
