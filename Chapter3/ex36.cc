// ex36.cc --  automobile gasoline consumption
#include <iostream>
#include <iomanip>

int main ()
{
double distance{}, petrol{};
std::cout << "distance in kilometers: ";
std::cin >> distance;
std::cout << "petrol in liters: ";
std::cin >> petrol;


std::cout << std::fixed << std::setprecision(2)
<< "Consume = " <<  (petrol * 100.0 ) / distance <<" liters per 100 kilometers."
<< std::endl;
    return 0;
}