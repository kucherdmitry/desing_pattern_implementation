#ifndef STEREOSETCDCOMMAND_H
#define STEREOSETCDCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetCDCommand : public ICommand
{
public:
    StereoSetCDCommand(Stereo *stereo);

    void execute() override;

private:
    Stereo *stereo = nullptr;
};

#endif // STEREOSETCDCOMMAND_H
