#ifndef TVOFFCOMMAND_H
#define TVOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVOffCommand : public ICommand
{
public:
    TVOffCommand(TV *tv);

    void execute() override;

private:
    TV *tv = nullptr;
};

#endif // TVOFFCOMMAND_H
