#ifndef HOTTUBJETSOFFCOMMAND_H
#define HOTTUBJETSOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubJetsOffCommand : public ICommand
{
public:
    HottubJetsOffCommand(Hottub *hottub);
    ~HottubJetsOffCommand() override = default;

    void execute() override;

private:
    Hottub *hottub = nullptr;
};

#endif // HOTTUBJETSOFFCOMMAND_H
