#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/light.h"

class LightOffCommand : public ICommand
{
public:
    LightOffCommand(Light *obj);
    ~LightOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Light *obj = nullptr;
};

#endif // LIGHTOFFCOMMAND_H
