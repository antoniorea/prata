// ex51.cc -- the sum of all the integers between and including the two integers
#include <iostream>

int main()
{

int inf, sup, total{}, a, b;
std::cout << "Please enter two numbers(Integers) : ";
std::cin >> a >> b;

sup = a > b ? a : b;
inf = a < b ? a : b;

for ( int i = inf ; i <= sup ; ++i)
    total += i;

std::cout << "the sum of all the integers between "<< inf 
<< " and "  << sup << "  is : "<< total << std::endl;

}