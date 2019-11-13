#ifndef GARAGEDOORLIGHTOFFCOMMAND_H
#define GARAGEDOORLIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/garagedoor.h"

class GarageDoorLightOffCommand : public ICommand
{
public:
    GarageDoorLightOffCommand(GarageDoor *garageDoor);

    void execute() override;
    void unexecute() override;

private:
    GarageDoor *garageDoor = nullptr;
};

#endif // GARAGEDOORLIGHTOFFCOMMAND_H
