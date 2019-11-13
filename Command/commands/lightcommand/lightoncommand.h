#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/light.h"

class LightOnCommand : public ICommand
{
public:
    LightOnCommand(Light *light);

    void execute() override;

private:
    Light *light = nullptr;
};

#endif // LIGHTONCOMMAND_H
