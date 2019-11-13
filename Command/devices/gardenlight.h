#ifndef GARDENLIGHT_H
#define GARDENLIGHT_H
#include <iostream>

class GardenLight
{
public:
    GardenLight();

    void setDuskTime();
    void setDawnTime();
    void manualOn();
    void manualOff();
};

#endif // GARDENLIGHT_H
