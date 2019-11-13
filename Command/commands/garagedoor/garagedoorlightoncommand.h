#ifndef GARAGEDOORLIGHTONCOMMAND_H
#define GARAGEDOORLIGHTONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/garagedoor.h"

class GarageDoorLightOnCommand : public ICommand
{
public:
    GarageDoorLightOnCommand(GarageDoor *garageDoor);

    void execute() override;
    void unexecute() override;

private:
    GarageDoor *garageDoor = nullptr;
};

#endif // GARAGEDOORLIGHTONCOMMAND_H
