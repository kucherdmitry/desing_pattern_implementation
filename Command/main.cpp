#include <iostream>
#include "remotecontrol.h"
#include "devices/appliancecontrol.h"
#include "devices/ceilingfan.h"
#include "commands/appliancecommand/applianceoncommand.h"
#include "commands/appliancecommand/applianceoffcommand.h"
#include "commands/ceilingfan/ceilingfanhighcommand.h"
#include "commands/ceilingfan/ceilingfanmediumcommand.h"
#include "commands/ceilingfan/ceilingfanlowcommand.h"
#include "commands/ceilingfan/ceilingfanoffcommand.h"

using namespace std;

int main()
{
    unique_ptr<RemoteControl> remote (new RemoteControl);

    shared_ptr<ApplianceControl> app (new ApplianceControl("Washing Machine"));
    shared_ptr<CeilingFan> ceilFan (new CeilingFan("Bedroom"));

    unique_ptr<ICommand> appOnCommand (new ApplianceOnCommand(app));
    unique_ptr<ICommand> appOffCommand (new ApplianceOffCommand(app));

    unique_ptr<ICommand> ceilFanHigh(new CeilingFanHighCommand(ceilFan));
    unique_ptr<ICommand> ceilFanMedium (new CeilingFanMediumCommand(ceilFan));
    unique_ptr<ICommand> ceilFanLow (new CeilingFanLowCommand(ceilFan));
    unique_ptr<ICommand> ceilFanOff (new CeilingFanOffCommand(ceilFan));

    remote->setCommand(0, appOnCommand, appOffCommand);
    remote->setCommand(1, ceilFanHigh, ceilFanOff);
    remote->setCommand(2, ceilFanMedium, ceilFanOff);
    remote->setCommand(3, ceilFanLow, ceilFanOff);

    remote->onButtonWasPushed(1);
    remote->onButtonWasPushed(2);
    remote->onButtonWasPushed(3);

    remote->offButtonWasPushed(3);

    return 0;
}
