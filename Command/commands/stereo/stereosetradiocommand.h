#ifndef STEREOSETRADIOCOMMAND_H
#define STEREOSETRADIOCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetRadioCommand : public ICommand
{
public:
    StereoSetRadioCommand(Stereo *stereo);

    void execute() override;

private:
    Stereo *stereo = nullptr;
};

#endif // STEREOSETRADIOCOMMAND_H
