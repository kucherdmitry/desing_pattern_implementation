#include <iostream>
#include "weatherstation.h"
#include "currentconditiondisplay.h"
#include "forecastdisplay.h"
#include "statisticsdisplay.h"

using namespace std;

int main()
{
    WeatherStation weatherStation;
    CurrentConditionDisplay current(weatherStation);
    ForecastDisplay forecast(weatherStation);
    StatisticsDisplay statistics(weatherStation);

    weatherStation.setMeasurements(26, 50, 15);

    cout << "\n";

    weatherStation.setMeasurements(30, 12, 50);

    cout << "\n";

    weatherStation.setMeasurements(29, 18, 70);

    cout << "\n";

    weatherStation.setMeasurements(45, 10, 72);

    cout << "\n";

    return 0;
}
