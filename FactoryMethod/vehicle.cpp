#include "vehicle.h"

Vehicle::Vehicle()
{
    std::cout << "Construct class Vehicle " << this << std::endl;
}

Vehicle::~Vehicle()
{
    std::cout << "Destruct class Vehicle " << this << std::endl;
}

Vehicle *Vehicle::createVehicle(VehicleType type)
{
    if (type == VT_TwoWheeler)
    {
        return new TwoWheeler;
    }
    else if (type == VT_ThreeWheeler)
    {
        return new ThreeWheeler;
    }
    else if (type == VT_FourWheeler)
    {
        return new FourWheeler;
    }
    else
    {
        return nullptr;
    }
}

TwoWheeler::TwoWheeler()
{
    std::cout << "Construct class TwoWheeler " << this << std::endl;
}

TwoWheeler::~TwoWheeler()
{
    std::cout << "Destruct class TwoWheeler " << this << std::endl;
}

void TwoWheeler::printVehicle()
{
    std::cout << "I'm a TwoVheeler!\n";
}

ThreeWheeler::ThreeWheeler()
{
    std::cout << "Construct class ThreeWheeler " << this << std::endl;
}

ThreeWheeler::~ThreeWheeler()
{
    std::cout << "Destruct class ThreeWheeler " << this << std::endl;
}

void ThreeWheeler::printVehicle()
{
    std::cout << "I'm a ThreeVheeler!\n";
}

FourWheeler::FourWheeler()
{
    std::cout << "Construct class FourWheeler " << this << std::endl;
}

FourWheeler::~FourWheeler()
{
    std::cout << "Destruct class FourWheeler " << this << std::endl;
}

void FourWheeler::printVehicle()
{
    std::cout << "I'm a FourVheeler!\n";
}
