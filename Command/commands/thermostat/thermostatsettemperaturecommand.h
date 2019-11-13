#ifndef THERMOSTATSETTEMPERATURECOMMAND_H
#define THERMOSTATSETTEMPERATURECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/thermostat.h"

class ThermostatSetTemperatureCommand : public ICommand
{
public:
    ThermostatSetTemperatureCommand(Thermostat *obj);
    ~ThermostatSetTemperatureCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Thermostat *obj = nullptr;
};

#endif // THERMOSTATSETTEMPERATURECOMMAND_H
