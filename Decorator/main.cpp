#include <iostream>
#include "darkroast.h"
#include "espresso.h"
#include "milk.h"
#include "mocha.h"
#include "soy.h"
#include "caramel.h"

using namespace std;

int main()
{
    Beverage *darkRoast = new DarkRoast;
    darkRoast = new Milk(darkRoast);
    darkRoast = new Mocha(darkRoast);
    darkRoast = new Soy(darkRoast);
    darkRoast = new Caramel(darkRoast);

//    Beverage *espresso = new Espresso;
//    espresso = new Milk(espresso);
//    espresso = new Mocha(espresso);
//    espresso = new Soy(espresso);

    cout << "\n";

    cout << darkRoast->getDescription() + " $" << darkRoast->getCost() << endl;
//    cout << espresso->getDescription() + " $" << espresso->getCost() << endl;

    cout << "\n";

    delete darkRoast;
//    delete espresso;

    cout << "\n";

    return 0;
}
