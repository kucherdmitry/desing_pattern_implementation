#ifndef STEREOSETCDCOMMAND_H
#define STEREOSETCDCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetCDCommand : public ICommand
{
public:
    StereoSetCDCommand(Stereo *obj);
    ~StereoSetCDCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Stereo *obj = nullptr;
};

#endif // STEREOSETCDCOMMAND_H
