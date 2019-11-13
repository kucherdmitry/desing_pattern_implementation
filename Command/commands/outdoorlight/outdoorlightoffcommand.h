#ifndef OUTDOORLIGHTOFFCOMMAND_H
#define OUTDOORLIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/outdoorlight.h"

class OutdoorLightOffCommand : public ICommand
{
public:
    OutdoorLightOffCommand(OutdoorLight *outdoorLight);

    void execute() override;

private:
    OutdoorLight *outdoorLight = nullptr;
};

#endif // OUTDOORLIGHTOFFCOMMAND_H
