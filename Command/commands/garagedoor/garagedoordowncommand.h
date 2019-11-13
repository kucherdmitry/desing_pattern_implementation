#ifndef GARAGEDOORDOWNCOMMAND_H
#define GARAGEDOORDOWNCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/garagedoor.h"

class GarageDoorDownCommand : public ICommand
{
public:
    GarageDoorDownCommand(GarageDoor *obj);
    ~GarageDoorDownCommand() override;

    void execute() override;
    void unexecute() override;

private:
    GarageDoor *obj = nullptr;
};

#endif // GARAGEDOORDOWNCOMMAND_H
