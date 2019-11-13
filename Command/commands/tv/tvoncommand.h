#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVOnCommand : public ICommand
{
public:
    TVOnCommand(TV *obj);
    ~TVOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    TV *obj = nullptr;
};

#endif // TVONCOMMAND_H
