#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "iobserver.h"
#include "idisplayelement.h"

class ForecastDisplay : public IObserver, public IDisplayElement
{
public:
    ForecastDisplay();

    void display() override;
    void update(float temp, float humidity, float pressure) override;
};

#endif // FORECASTDISPLAY_H
