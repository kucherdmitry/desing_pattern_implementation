#ifndef TVSETVOLUMECOMMAND_H
#define TVSETVOLUMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVSetVolumeCommand : public ICommand
{
public:
    TVSetVolumeCommand(TV *obj);
    ~TVSetVolumeCommand() override;

    void execute() override;
    void unexecute() override;

private:
    TV *obj = nullptr;
};

#endif // TVSETVOLUMECOMMAND_H
