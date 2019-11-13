#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/light.h"

class LightOffCommand : public ICommand
{
public:
    LightOffCommand(Light *light);

    void execute() override;

private:
    Light *light = nullptr;
};

#endif // LIGHTOFFCOMMAND_H
