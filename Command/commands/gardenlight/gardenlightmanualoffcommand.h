#ifndef GARDENLIGHTMANUALOFFCOMMAND_H
#define GARDENLIGHTMANUALOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/gardenlight.h"

class GardenLightManualOffCommand : public ICommand
{
public:
    GardenLightManualOffCommand(GardenLight *obj);
    ~GardenLightManualOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    GardenLight *obj = nullptr;
};

#endif // GARDENLIGHTMANUALOFFCOMMAND_H
