#ifndef TVSETINPUTCHANNEL_H
#define TVSETINPUTCHANNEL_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVSetInputChannel : public ICommand
{
public:
    TVSetInputChannel(TV *obj);
    ~TVSetInputChannel() override;

    void execute() override;
    void unexecute() override;

private:
    TV *obj = nullptr;
};

#endif // TVSETINPUTCHANNEL_H
