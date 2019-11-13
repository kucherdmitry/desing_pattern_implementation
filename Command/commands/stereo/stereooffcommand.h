#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoOffCommand : public ICommand
{
public:
    StereoOffCommand(Stereo *obj);
    ~StereoOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Stereo *obj = nullptr;
};

#endif // STEREOOFFCOMMAND_H
