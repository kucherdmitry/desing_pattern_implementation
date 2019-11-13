#ifndef GARDENLIGHTSETDUSTTIMECOMMAND_H
#define GARDENLIGHTSETDUSTTIMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightSetDustTimeCommand : public ICommand
{
public:
    GardenLightSetDustTimeCommand(GardenLight *obj);
    ~GardenLightSetDustTimeCommand() override;

    void execute() override;
    void unexecute() override;

private:
    GardenLight *obj = nullptr;
};

#endif // GARDENLIGHTSETDUSTTIMECOMMAND_H
