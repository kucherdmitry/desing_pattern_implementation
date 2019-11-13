#ifndef CEILINGLIGHTDIMCOMMAND_H
#define CEILINGLIGHTDIMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilinglight.h"

class CeilingLightDimCommand : public ICommand
{
public:
    CeilingLightDimCommand(CeilingLight *obj);
    ~CeilingLightDimCommand() override;

    void execute() override;
    void unexecute() override;

private:
    CeilingLight *obj = nullptr;
};

#endif // CEILINGLIGHTDIMCOMMAND_H
