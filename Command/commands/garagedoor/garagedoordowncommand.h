#ifndef GARAGEDOORDOWNCOMMAND_H
#define GARAGEDOORDOWNCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/garagedoor.h"

class GarageDoorDownCommand : public ICommand
{
public:
    GarageDoorDownCommand(GarageDoor *garageDoor);
    ~GarageDoorDownCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    GarageDoor *garageDoor = nullptr;
};

#endif // GARAGEDOORDOWNCOMMAND_H
