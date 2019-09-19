#include "ifly.h"

IFly::IFly()
{
    cout << "Construct interface IFly\n";
}

IFly::~IFly()
{
    cout << "Destruct interface IFly\n";
}

WingsFly::WingsFly()
{
    cout << "Construct behavior WingsFly\n";
}

WingsFly::~WingsFly()
{
    cout << "Destruct behavior WingsFly\n";
}

void WingsFly::makeFly()
{
    cout << "I'm flying with wings!\n";
}

NoFly::NoFly()
{
    cout << "Construct behavior NoFly\n";
}

NoFly::~NoFly()
{
    cout << "Destruct behavior NoFly\n";
}

void NoFly::makeFly()
{
    cout << "I can't flying anyway!\n";
}
