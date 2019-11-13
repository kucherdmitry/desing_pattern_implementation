#ifndef SPRINKLERWATERONCOMMAND_H
#define SPRINKLERWATERONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/sprinkler.h"

class SprinklerWaterOnCommand : public ICommand
{
public:
    SprinklerWaterOnCommand(Sprinkler *obj);
    ~SprinklerWaterOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Sprinkler *obj = nullptr;
};

#endif // SPRINKLERWATERONCOMMAND_H
