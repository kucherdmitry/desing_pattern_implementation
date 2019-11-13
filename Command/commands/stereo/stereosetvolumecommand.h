#ifndef STEREOSETVOLUMECOMMAND_H
#define STEREOSETVOLUMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetVolumeCommand : public ICommand
{
public:
    StereoSetVolumeCommand(Stereo *stereo);

    void execute() override;

private:
    Stereo *stereo = nullptr;
};

#endif // STEREOSETVOLUMECOMMAND_H
