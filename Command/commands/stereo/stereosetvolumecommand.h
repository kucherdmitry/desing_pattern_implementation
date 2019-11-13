#ifndef STEREOSETVOLUMECOMMAND_H
#define STEREOSETVOLUMECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetVolumeCommand : public ICommand
{
public:
    StereoSetVolumeCommand(Stereo *obj);
    ~StereoSetVolumeCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Stereo *obj = nullptr;
};

#endif // STEREOSETVOLUMECOMMAND_H
