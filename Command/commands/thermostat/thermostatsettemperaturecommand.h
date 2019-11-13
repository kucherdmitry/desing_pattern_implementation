#ifndef THERMOSTATSETTEMPERATURECOMMAND_H
#define THERMOSTATSETTEMPERATURECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/thermostat.h"

class ThermostatSetTemperatureCommand : public ICommand
{
public:
    ThermostatSetTemperatureCommand(Thermostat *thermostat);

    void execute() override;

private:
    Thermostat *thermostat = nullptr;
};

#endif // THERMOSTATSETTEMPERATURECOMMAND_H
