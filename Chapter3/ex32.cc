// ex32.cc -- body mass index BMI
// #define FOOT_IN_INCHES 12
#include <iostream>

int main()
{
unsigned short inches{} , feet{}, bmi{};
float  weight{};
const short FOOT_IN_INCHES{12};
const float INCHES_TO_METERS{0.0254};
const float POUNDS_TO_KG{2.2};
    
std::cout << "Enter your height in feet and inches: __\b\b";
std::cin >> feet;
std::cin >> inches;
inches += FOOT_IN_INCHES * feet;
std::cout << "Enter your weight in pounds : __\b\b";
std::cin >> weight;

bmi = (weight / POUNDS_TO_KG) / ((inches * INCHES_TO_METERS) * (inches * INCHES_TO_METERS));

std::cout << "BMI : " << bmi <<  std::endl;

return 0;
}