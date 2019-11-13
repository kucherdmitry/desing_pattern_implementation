#include "thermostatsettemperaturecommand.h"

ThermostatSetTemperatureCommand::ThermostatSetTemperatureCommand(Thermostat *obj)
{
    this->obj = obj;
}

ThermostatSetTemperatureCommand::~ThermostatSetTemperatureCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void ThermostatSetTemperatureCommand::execute()
{
    this->obj->setTemperature();
}

void ThermostatSetTemperatureCommand::unexecute()
{

}
