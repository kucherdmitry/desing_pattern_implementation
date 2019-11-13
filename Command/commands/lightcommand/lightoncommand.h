#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/light.h"

class LightOnCommand : public ICommand
{
public:
    LightOnCommand(Light *obj);
    ~LightOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Light *obj = nullptr;
};

#endif // LIGHTONCOMMAND_H
