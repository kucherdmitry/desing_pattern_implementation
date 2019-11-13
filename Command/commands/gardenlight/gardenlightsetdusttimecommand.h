#ifndef GARDENLIGHTSETDUSTTIMECOMMAND_H
#define GARDENLIGHTSETDUSTTIMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightSetDustTimeCommand : public ICommand
{
public:
    GardenLightSetDustTimeCommand(GardenLight *gardenLight);
    ~GardenLightSetDustTimeCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    GardenLight *gardenLight = nullptr;
};

#endif // GARDENLIGHTSETDUSTTIMECOMMAND_H
