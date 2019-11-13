#ifndef HOTTUBSETTEMPERATURECOMMAND_H
#define HOTTUBSETTEMPERATURECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubSetTemperatureCommand : public ICommand
{
public:
    HottubSetTemperatureCommand(Hottub *obj);
    ~HottubSetTemperatureCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Hottub *obj = nullptr;
};

#endif // HOTTUBSETTEMPERATURECOMMAND_H
