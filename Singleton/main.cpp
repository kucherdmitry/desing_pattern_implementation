#include <iostream>
#include "chocolateboiler.h"

using namespace std;

int main()
{
    ChocolateBoiler &boiler = ChocolateBoiler::getInstance();

    cout << "Boiler: "; boiler.getAddress();
    boiler.fill();
    boiler.boil();
    boiler.drain();

    ChocolateBoiler &newBoiler = ChocolateBoiler::getInstance();

    cout << "Boiler: "; newBoiler.getAddress();
    newBoiler.fill();
    newBoiler.boil();
    newBoiler.drain();

    return 0;
}
