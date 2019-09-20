#include "currentconditiondisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(WeatherStation &weatherData)
{
    weatherData.registerObserver(this);
}

void CurrentConditionDisplay::display()
{
    std::cout << "Current conditions: " << this->temperature << "C deg., humidity: " << this->humidity << "%" << std::endl;
}

void CurrentConditionDisplay::update(float temp, float humidity, float pressure)
{
    pressure = 0;
    this->temperature = temp;
    this->humidity = humidity;
    this->display();
}
