#include <iostream>

int main()
{
    int n0, n1, years = 0;    
    
    std::cout << "enter the initial numbers of llamas :";
    std::cin >> n0;
    std::cout << "enter the final numbers of llamas :";
    std::cin >> n1;
    float poblacion = float(n0);    // truncation

    while(poblacion < n1)
    {
        poblacion += ((poblacion/3.0) - (poblacion/4.0));  //  poblacion += poblacion/12
        years++;
    }

    std::cout << "se necesitan "<< years << " años para llegar a las "<< n1 << " llamas" << std::endl;

    return 0;
}