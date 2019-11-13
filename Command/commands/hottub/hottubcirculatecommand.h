#ifndef HOTTUBCIRCULATECOMMAND_H
#define HOTTUBCIRCULATECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubCirculateCommand : public ICommand
{
public:
    HottubCirculateCommand(Hottub *hottub);
    ~HottubCirculateCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    Hottub *hottub = nullptr;
};

#endif // HOTTUBCIRCULATECOMMAND_H
