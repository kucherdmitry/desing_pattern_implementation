#ifndef TVSETVOLUMECOMMAND_H
#define TVSETVOLUMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVSetVolumeCommand : public ICommand
{
public:
    TVSetVolumeCommand(TV *tv);

    void execute() override;

private:
    TV *tv = nullptr;
};

#endif // TVSETVOLUMECOMMAND_H
