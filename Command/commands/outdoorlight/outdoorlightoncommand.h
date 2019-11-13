#ifndef OUTDOORLIGHTONCOMMAND_H
#define OUTDOORLIGHTONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/outdoorlight.h"

class OutdoorLightOnCommand : public ICommand
{
public:
    OutdoorLightOnCommand(OutdoorLight *outdoorLight);

    void execute() override;

private:
    OutdoorLight *outdoorLight = nullptr;
};

#endif // OUTDOORLIGHTONCOMMAND_H
