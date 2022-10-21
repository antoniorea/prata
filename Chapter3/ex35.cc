// ex35.cc -- World population
#include <iostream>
#include <iomanip>

int main ()
{
long long world_pop{}, us_pop{};
std::cout << "Enter the world's population: ";
std::cin >> world_pop;
std::cout << "Enter the population of the US: ";
std::cin >> us_pop;


std::cout << std::fixed << std::setprecision(2)
<< "The population of the US is " <<  (us_pop * 100.0 ) / world_pop <<"\% of the world population."
<< std::endl;
    return 0;
}