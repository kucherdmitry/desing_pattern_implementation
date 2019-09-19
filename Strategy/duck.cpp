#include "duck.h"

Duck::Duck()
{
    cout << "Construct class Duck\n";
}

Duck::~Duck()
{
    cout << "Destruct class Duck\n";
    delete this->flyInterface;
    delete this->quackInterface;
}

void Duck::makeFly()
{
    flyInterface->makeFly();
}

void Duck::makeSound()
{
    quackInterface->makeSound();
}

WildDuck::WildDuck(IFly *fb, IQuack *qb)
{
    cout << "Construct class WildDuck\n";
    this->flyInterface = fb;
    this->quackInterface = qb;
}

WildDuck::~WildDuck()
{
    cout << "Destruct class WildDuck\n";
}

void WildDuck::display()
{
    cout << "I'm a Wild Duck!\n";
}

CityDuck::CityDuck(IFly *fb, IQuack *qb)
{
    cout << "Construct class CityDuck\n";
    this->flyInterface = fb;
    this->quackInterface = qb;
}

CityDuck::~CityDuck()
{
    cout << "Destruct class CityDuck\n";
}

void CityDuck::display()
{
    cout << "I'm a City Duck!\n";
}

FakeDuck::FakeDuck(IFly *fb, IQuack *qb)
{
    cout << "Construct class FakeDuck\n";
    this->flyInterface = fb;
    this->quackInterface = qb;
}

FakeDuck::~FakeDuck()
{
    cout << "Destruct class FakeDuck\n";
}

void FakeDuck::display()
{
    cout << "I'm a fake duck!\n";
}
