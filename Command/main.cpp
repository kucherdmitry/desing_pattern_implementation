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
    RemoteControl *remote = new RemoteControl;

    ApplianceControl *app = new ApplianceControl("Washing Machine");
    CeilingFan *ceilFan = new CeilingFan("Bedroom");

    ApplianceOnCommand *appOnCommand = new ApplianceOnCommand(app);
    ApplianceOffCommand *appOffCommand = new ApplianceOffCommand(app);
    CeilingFanHighCommand *ceilFanHigh = new CeilingFanHighCommand(ceilFan);
    CeilingFanMediumCommand *ceilFanMedium = new CeilingFanMediumCommand(ceilFan);
    CeilingFanLowCommand *ceilFanLow = new CeilingFanLowCommand(ceilFan);
    CeilingFanOffCommand *ceilFanOff = new CeilingFanOffCommand(ceilFan);

    remote->setCommand(0, appOnCommand, appOffCommand);
    remote->setCommand(1, ceilFanHigh, ceilFanOff);
    remote->setCommand(2, ceilFanMedium, ceilFanOff);
    remote->setCommand(3, ceilFanLow, ceilFanOff);

    remote->onButtonWasPushed(0);
    remote->offButtonWasPushed(0);

    remote->onButtonWasPushed(1);
    remote->onButtonWasPushed(2);
    remote->onButtonWasPushed(3);
    remote->offButtonWasPushed(1);

    return 0;
}
