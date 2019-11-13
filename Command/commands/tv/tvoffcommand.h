#ifndef TVOFFCOMMAND_H
#define TVOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVOffCommand : public ICommand
{
public:
    TVOffCommand(TV *obj);
    ~TVOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    TV *obj = nullptr;
};

#endif // TVOFFCOMMAND_H
