#ifndef GARAGEDOORLIGHTOFFCOMMAND_H
#define GARAGEDOORLIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/garagedoor.h"

class GarageDoorLightOffCommand : public ICommand
{
public:
    GarageDoorLightOffCommand(GarageDoor *obj);
    ~GarageDoorLightOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    GarageDoor *obj = nullptr;
};

#endif // GARAGEDOORLIGHTOFFCOMMAND_H
