#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "iobserver.h"
#include "idisplayelement.h"
#include "weatherstation.h"
#include <iostream>
#include <vector>
#include <algorithm>

class StatisticsDisplay : public IObserver, public IDisplayElement
{
private:
    std::vector<float> temperature;
public:
    StatisticsDisplay(WeatherStation &weatherData);
    ~StatisticsDisplay() override = default;

    void display() override;
    void update(float temp, float humidity, float pressure) override;
};

#endif // STATISTICSDISPLAY_H
