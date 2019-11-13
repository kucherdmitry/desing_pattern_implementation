#ifndef CEILINGLIGHTDIMCOMMAND_H
#define CEILINGLIGHTDIMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilinglight.h"

class CeilingLightDimCommand : public ICommand
{
public:
    CeilingLightDimCommand(CeilingLight *ceilLight);
    ~CeilingLightDimCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    CeilingLight *ceilLight = nullptr;
};

#endif // CEILINGLIGHTDIMCOMMAND_H
