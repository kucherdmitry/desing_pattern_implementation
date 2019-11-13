#ifndef STEREOSETRADIOCOMMAND_H
#define STEREOSETRADIOCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoSetRadioCommand : public ICommand
{
public:
    StereoSetRadioCommand(Stereo *obj);
    ~StereoSetRadioCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Stereo *obj = nullptr;
};

#endif // STEREOSETRADIOCOMMAND_H
