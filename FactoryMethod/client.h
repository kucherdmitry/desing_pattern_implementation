#ifndef CLIENT_H
#define CLIENT_H

#include "vehicle.h"

class Client
{
private:
    Vehicle *pVehicle = nullptr;
public:
    Client(VehicleType type);
    ~Client();

    Vehicle *getVehicle();
};

#endif // CLIENT_H
