#ifndef OUTDOORLIGHTONCOMMAND_H
#define OUTDOORLIGHTONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/outdoorlight.h"

class OutdoorLightOnCommand : public ICommand
{
public:
    OutdoorLightOnCommand(OutdoorLight *obj);
    ~OutdoorLightOnCommand() override;

    void execute() override;

private:
    OutdoorLight *obj = nullptr;
};

#endif // OUTDOORLIGHTONCOMMAND_H
