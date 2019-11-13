#ifndef GARDENLIGHTSETDAWNTIMECOMMAND_H
#define GARDENLIGHTSETDAWNTIMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightSetDawnTimeCommand : public ICommand
{
public:
    GardenLightSetDawnTimeCommand(GardenLight *obj);
    ~GardenLightSetDawnTimeCommand() override;


    void execute() override;
    void unexecute() override;

private:
    GardenLight *obj = nullptr;
};

#endif // GARDENLIGHTSETDAWNTIMECOMMAND_H
