#ifndef HOTTUBJETSONCOMMAND_H
#define HOTTUBJETSONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubJetsOnCommand : public ICommand
{
public:
    HottubJetsOnCommand(Hottub *hottub);
    ~HottubJetsOnCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    Hottub *hottub = nullptr;
};

#endif // HOTTUBJETSONCOMMAND_H
