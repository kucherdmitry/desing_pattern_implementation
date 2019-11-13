#ifndef GARDENLIGHTMANUALONCOMMAND_H
#define GARDENLIGHTMANUALONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightManualOnCommand : public ICommand
{
public:
    GardenLightManualOnCommand(GardenLight *obj);
    ~GardenLightManualOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    GardenLight *obj = nullptr;
};

#endif // GARDENLIGHTMANUALONCOMMAND_H
