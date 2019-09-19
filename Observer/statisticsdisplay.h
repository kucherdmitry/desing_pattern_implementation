#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "iobserver.h"
#include "idisplayelement.h"

class StatisticsDisplay : public IObserver, public IDisplayElement
{
public:
    StatisticsDisplay();

    void display() override;
    void update(float temp, float humidity, float pressure) override;
};

#endif // STATISTICSDISPLAY_H
