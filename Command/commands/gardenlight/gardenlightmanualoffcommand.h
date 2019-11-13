#ifndef GARDENLIGHTMANUALOFFCOMMAND_H
#define GARDENLIGHTMANUALOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightManualOffCommand : public ICommand
{
public:
    GardenLightManualOffCommand(GardenLight *gardenLight);
    ~GardenLightManualOffCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    GardenLight *gardenLight = nullptr;
};

#endif // GARDENLIGHTMANUALOFFCOMMAND_H
