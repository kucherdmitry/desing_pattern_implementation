#ifndef GARAGEDOORUPCOMMAND_H
#define GARAGEDOORUPCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/garagedoor.h"

class GarageDoorUpCommand : public ICommand
{
public:
    GarageDoorUpCommand(GarageDoor *obj);
    ~GarageDoorUpCommand() override;

    void execute() override;
    void unexecute() override;

private:
    GarageDoor *obj = nullptr;
};

#endif // GARAGEDOORUPCOMMAND_H
