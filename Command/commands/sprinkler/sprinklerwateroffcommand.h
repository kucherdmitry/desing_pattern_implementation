#ifndef SPRINKLERWATEROFFCOMMAND_H
#define SPRINKLERWATEROFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/sprinkler.h"

class SprinklerWaterOffCommand : public ICommand
{
public:
    SprinklerWaterOffCommand(Sprinkler *obj);
    ~SprinklerWaterOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Sprinkler *obj = nullptr;
};

#endif // SPRINKLERWATEROFFCOMMAND_H
