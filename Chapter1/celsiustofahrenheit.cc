//  celsiustofahrenheit.cc --  Celsius to Fahrenheit
//  Fahrenheit = 1.8 × degrees Celsius + 32.0
#include <iostream>
double fahrenhait( double  );           // function prototype

int main()
{

    std::cout << "Please enter a Celsius value: ";
    double cel;
    std::cin >> cel;
    auto fahr = fahrenhait(cel);
    std::cout << cel <<" degrees Celsius is "<< fahr << " degrees Fahrenheit." << std::endl;
    return 0;
}

double fahrenhait( double t )           // function 
{
    return 1.8 * t + 32.0;
}