// ex31.cc -- exercise 1 chapter 3
// #define FOOT_IN_INCHES 12
#include <iostream>

int main()
{
unsigned pulgadas{}, inches{} , pies{};
const int FOOT_IN_INCHES{12};
    
std::cout << "Enter your height in inches: __\b\b";
std::cin >> inches;
pulgadas = inches % FOOT_IN_INCHES ;
pies = inches / FOOT_IN_INCHES ;

std::cout << "Feets : " << pies << " Inches : "<< pulgadas << std::endl;

    return 0;
}