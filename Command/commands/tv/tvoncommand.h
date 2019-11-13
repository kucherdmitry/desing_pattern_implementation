#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVOnCommand : public ICommand
{
public:
    TVOnCommand(TV *tv);

    void execute() override;

private:
    TV *tv = nullptr;
};

#endif // TVONCOMMAND_H
