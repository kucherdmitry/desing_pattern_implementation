#include <iostream>
#include "darkroast.h"
#include "espresso.h"
#include "decaf.h"
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

    Beverage *espresso = new Espresso;
    espresso = new Milk(espresso);
    espresso = new Mocha(espresso);
    espresso = new Soy(espresso);
    espresso = new Caramel(espresso);

    Beverage *decaf = new Decaf;
    decaf = new Milk(decaf);
    decaf = new Mocha(decaf);
    decaf = new Soy(decaf);
    decaf = new Caramel(decaf);

    cout << darkRoast->getDescription() + " $" << darkRoast->getCost() << endl;
    cout << espresso->getDescription() + " $" << espresso->getCost() << endl;
    cout << decaf->getDescription() + " $" << decaf->getCost() << endl;

    cout << "\n";

    delete darkRoast;
    delete espresso;
    delete decaf;

    return 0;
}
