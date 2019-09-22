#include "statisticsdisplay.h"

StatisticsDisplay::StatisticsDisplay(WeatherStation &weatherData)
{
    std::clog << "Construct class StatisticsDisplay " << this << std::endl;
    weatherData.registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay()
{
    std::clog << "Destruct class StatisticsDisplay " << this << std::endl;
}

void StatisticsDisplay::display()
{
    auto max = std::max_element(temperature.begin(),temperature.end());
    auto min = std::min_element(temperature.begin(),temperature.end());
    float avg{0};

    for(auto temp : temperature)
    {
        avg += temp;
    }

    avg /= temperature.size();

    std::cout << "Temperature Avg/Max/Min: " << avg << "/" << *max << "/" << *min << std::endl;
}

void StatisticsDisplay::update(float temp, float humidity, float pressure)
{
    humidity = 0;
    pressure = 0;
    temperature.push_back(temp);
    this->display();
}
