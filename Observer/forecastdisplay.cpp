#include "forecastdisplay.h"

ForecastDisplay::ForecastDisplay(WeatherStation &weatherData)
{
    weatherData.registerObserver(this);
}

void ForecastDisplay::display()
{
    std::cout << "Forecast pressure: " << this->pressure << std::endl;
}

void ForecastDisplay::update(float temp, float humidity, float pressure)
{
    humidity = 0;
    temp = 0;
    this->pressure = pressure;
    this->display();
}
