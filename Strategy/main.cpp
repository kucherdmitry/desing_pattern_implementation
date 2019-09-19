#include <iostream>
#include "duck.h"

using namespace std;

int main()
{
    Duck *wild = new WildDuck(new WingsFly, new Quack);

    cout << "\n";

    Duck *city = new CityDuck(new WingsFly, new Quack);

    cout << "\n";

    Duck *fake = new FakeDuck(new NoFly, new Squeek);

    cout << "\n";

    wild->display();
    wild->makeFly();
    wild->makeSound();

    cout << "\n";

    city->display();
    city->makeFly();
    city->makeSound();

    cout << "\n";

    fake->display();
    fake->makeFly();
    fake->makeSound();

    cout << "\n";

    delete wild;

    cout << "\n";

    delete city;

    cout << "\n";

    delete fake;

    cout << "\n";

    return 0;
}
