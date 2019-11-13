#ifndef STEREOSETDVDCOMMAND_H
#define STEREOSETDVDCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetDVDCommand : public ICommand
{
public:
    StereoSetDVDCommand(Stereo *stereo);

    void execute() override;

private:
    Stereo *stereo = nullptr;
};

#endif // STEREOSETDVDCOMMAND_H
