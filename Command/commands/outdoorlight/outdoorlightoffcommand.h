#ifndef OUTDOORLIGHTOFFCOMMAND_H
#define OUTDOORLIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/outdoorlight.h"

class OutdoorLightOffCommand : public ICommand
{
public:
    OutdoorLightOffCommand(OutdoorLight *obj);
    ~OutdoorLightOffCommand() override;

    void execute() override;

private:
    OutdoorLight *obj = nullptr;
};

#endif // OUTDOORLIGHTOFFCOMMAND_H
