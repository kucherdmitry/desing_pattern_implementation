#ifndef GARDENLIGHTMANUALONCOMMAND_H
#define GARDENLIGHTMANUALONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightManualOnCommand : public ICommand
{
public:
    GardenLightManualOnCommand(GardenLight *gardenLight);
    ~GardenLightManualOnCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    GardenLight *gardenLight = nullptr;
};

#endif // GARDENLIGHTMANUALONCOMMAND_H
