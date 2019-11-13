#ifndef HOTTUBCIRCULATECOMMAND_H
#define HOTTUBCIRCULATECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/hottub.h"

class HottubCirculateCommand : public ICommand
{
public:
    HottubCirculateCommand(Hottub *obj);
    ~HottubCirculateCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Hottub *obj = nullptr;
};

#endif // HOTTUBCIRCULATECOMMAND_H
