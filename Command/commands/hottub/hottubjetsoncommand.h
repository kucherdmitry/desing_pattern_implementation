#ifndef HOTTUBJETSONCOMMAND_H
#define HOTTUBJETSONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubJetsOnCommand : public ICommand
{
public:
    HottubJetsOnCommand(Hottub *obj);
    ~HottubJetsOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Hottub *obj = nullptr;
};

#endif // HOTTUBJETSONCOMMAND_H
