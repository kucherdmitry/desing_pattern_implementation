#include "currentconditiondisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(ISubject *weatherData)
{
    this->wthrData = weatherData;
    wthrData->registerObserver(this);
}

void CurrentConditionDisplay::display()
{
    std::cout << "Current conditions: " << this->temperature << "C, humidity: " << this->humidity << ", pressure: " << this->pressure << std::endl;
}

void CurrentConditionDisplay::update(float temp, float humidity, float pressure)
{
    this->temperature = temp;
    this->humidity = humidity;
    this->pressure = pressure;
    this->display();
}
