#include "thermostatsettemperaturecommand.h"

ThermostatSetTemperatureCommand::ThermostatSetTemperatureCommand(Thermostat *thermostat)
{
    this->thermostat = thermostat;
}

void ThermostatSetTemperatureCommand::execute()
{
    this->thermostat->setTemperature();
}
