#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

enum VehicleType
{
    VT_TwoWheeler,
    VT_ThreeWheeler,
    VT_FourWheeler
};

class Vehicle
{
public:
    Vehicle();
    virtual ~Vehicle();

    virtual void printVehicle() = 0;
    static Vehicle* createVehicle(VehicleType type);
};

class TwoWheeler : public Vehicle
{
public:
    TwoWheeler();
    ~TwoWheeler() override;

    void printVehicle() override;
};

class ThreeWheeler : public Vehicle
{
public:
    ThreeWheeler();
    ~ThreeWheeler() override;

    void printVehicle() override;
};

class FourWheeler : public Vehicle
{
public:
    FourWheeler();
    ~FourWheeler() override;

    void printVehicle() override;
};

#endif // VEHICLE_H
