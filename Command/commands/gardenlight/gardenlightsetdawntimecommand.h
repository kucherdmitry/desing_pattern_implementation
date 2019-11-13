#ifndef GARDENLIGHTSETDAWNTIMECOMMAND_H
#define GARDENLIGHTSETDAWNTIMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightSetDawnTimeCommand : public ICommand
{
public:
    GardenLightSetDawnTimeCommand(GardenLight *gardenLight);
    ~GardenLightSetDawnTimeCommand() override = default;


    void execute() override;
    void unexecute() override;

private:
    GardenLight *gardenLight = nullptr;
};

#endif // GARDENLIGHTSETDAWNTIMECOMMAND_H
