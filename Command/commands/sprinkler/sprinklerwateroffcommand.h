#ifndef SPRINKLERWATEROFFCOMMAND_H
#define SPRINKLERWATEROFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/sprinkler.h"

class SprinklerWaterOffCommand : public ICommand
{
public:
    SprinklerWaterOffCommand(Sprinkler *sprinkler);

    void execute() override;

private:
    Sprinkler *sprinkler = nullptr;
};

#endif // SPRINKLERWATEROFFCOMMAND_H
