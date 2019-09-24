#include <iostream>
#include "client.h"

using namespace std;

int main()
{
    Client *TwoWheeler = new Client(VT_TwoWheeler);
    Client *ThreeWheeler = new Client(VT_ThreeWheeler);
    Client *FourWheeler = new Client(VT_FourWheeler);

    cout << "\n";

    TwoWheeler->getVehicle()->printVehicle();
    ThreeWheeler->getVehicle()->printVehicle();
    FourWheeler->getVehicle()->printVehicle();

    cout << "\n";

    delete TwoWheeler;
    delete ThreeWheeler;
    delete FourWheeler;

    cout << "\n";

    return 0;
}
