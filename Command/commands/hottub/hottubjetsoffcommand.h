#ifndef HOTTUBJETSOFFCOMMAND_H
#define HOTTUBJETSOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubJetsOffCommand : public ICommand
{
public:
    HottubJetsOffCommand(Hottub *obj);
    ~HottubJetsOffCommand() override;

    void execute() override;

private:
    Hottub *obj = nullptr;
};

#endif // HOTTUBJETSOFFCOMMAND_H
