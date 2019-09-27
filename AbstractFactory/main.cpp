#include <iostream>
#include "factories/chicagopizzafactory.h"
#include "factories/nypizzafactory.h"

using namespace std;

int main()
{
    PizzaShop *chicago = new ChicagoPizzaFactory;
    PizzaShop *newYork = new NYPizzaFactory;

    chicago->orderPizza(cheesePizza);

    std::cout << "\n";

    newYork->orderPizza(clamPizza);

    delete chicago;
    delete newYork;

    return 0;
}
