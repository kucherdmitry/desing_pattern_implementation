#include <iostream>
#include "darkroast.h"
#include "milk.h"

using namespace std;

int main()
{
    Beverage *darkRoast = new DarkRoast;
    darkRoast = new Milk(darkRoast);

    cout << darkRoast->getDescription() + " $" << darkRoast->getCost() << endl;

    return 0;
}
