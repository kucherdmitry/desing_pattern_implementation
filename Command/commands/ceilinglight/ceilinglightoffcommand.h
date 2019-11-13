#ifndef CEILINGLIGHTOFFCOMMAND_H
#define CEILINGLIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilinglight.h"

class CeilingLightOffCommand : public ICommand
{
public:
    CeilingLightOffCommand(CeilingLight *obj);
    ~CeilingLightOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    CeilingLight *obj = nullptr;
};

#endif // CEILINGLIGHTOFFCOMMAND_H
