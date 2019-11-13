#ifndef STEREOSETDVDCOMMAND_H
#define STEREOSETDVDCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetDVDCommand : public ICommand
{
public:
    StereoSetDVDCommand(Stereo *obj);
    ~StereoSetDVDCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Stereo *obj = nullptr;
};

#endif // STEREOSETDVDCOMMAND_H
