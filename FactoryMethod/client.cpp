#include "client.h"

Client::Client(VehicleType type)
{
    pVehicle = Vehicle::createVehicle(type);
}

Client::~Client()
{
    if (pVehicle != nullptr)
    {
        delete pVehicle;
        pVehicle = nullptr;
    }
}

Vehicle *Client::getVehicle()
{
    return pVehicle;
}
