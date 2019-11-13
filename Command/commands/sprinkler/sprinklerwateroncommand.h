#ifndef SPRINKLERWATERONCOMMAND_H
#define SPRINKLERWATERONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/sprinkler.h"

class SprinklerWaterOnCommand : public ICommand
{
public:
    SprinklerWaterOnCommand(Sprinkler *sprinkler);

    void execute() override;

private:
    Sprinkler *sprinkler = nullptr;
};

#endif // SPRINKLERWATERONCOMMAND_H
