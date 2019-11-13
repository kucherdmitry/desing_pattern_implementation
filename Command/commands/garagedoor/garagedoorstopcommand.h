#ifndef GARAGEDOORSTOPCOMMAND_H
#define GARAGEDOORSTOPCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/garagedoor.h"

class GarageDoorStopCommand : public ICommand
{
public:
    GarageDoorStopCommand(GarageDoor *garageDoor);

    void execute() override;
    void unexecute() override;

private:
    GarageDoor *garageDoor = nullptr;
};

#endif // GARAGEDOORSTOPCOMMAND_H
