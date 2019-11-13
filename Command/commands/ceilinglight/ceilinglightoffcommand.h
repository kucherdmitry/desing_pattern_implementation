#ifndef CEILINGLIGHTOFFCOMMAND_H
#define CEILINGLIGHTOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilinglight.h"

class CeilingLightOffCommand : public ICommand
{
public:
    CeilingLightOffCommand(CeilingLight *ceilLight);
    ~CeilingLightOffCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    CeilingLight *ceilLight = nullptr;
};

#endif // CEILINGLIGHTOFFCOMMAND_H
