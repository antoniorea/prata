// ex37.cc --  automobile gasoline consumption conversion
#include <iostream>
#include <iomanip>

int main ()
{
double e_consuption{}, petrol{};
std::cout << "Enter gasoline consumption (liters per 100 kilometers):";
std::cin >> e_consuption;
const double conv_factor { 62.14 * 3.875 };

std::cout << std::fixed << std::setprecision(1)
<< "Consuption = " <<  conv_factor / e_consuption  <<" miles per gallon."
<< std::endl;
    return 0;
}