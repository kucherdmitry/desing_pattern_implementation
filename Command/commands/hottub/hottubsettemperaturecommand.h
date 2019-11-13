#ifndef HOTTUBSETTEMPERATURECOMMAND_H
#define HOTTUBSETTEMPERATURECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubSetTemperatureCommand : public ICommand
{
public:
    HottubSetTemperatureCommand(Hottub *hottub);
    ~HottubSetTemperatureCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    Hottub *hottub = nullptr;
};

#endif // HOTTUBSETTEMPERATURECOMMAND_H
