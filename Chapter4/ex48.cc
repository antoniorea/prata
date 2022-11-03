// ex56.cc -- array od structures
// William Wingate runs a pizza-analysis service
#include <iostream>
#include <iomanip>
#include <string>
//  #include <cstdio>
struct Pizza
    {
        std::string name;
        unsigned short diameter;
        double weigth;        
    };

int main()
{
Pizza* ps = new Pizza;                  // allot memory for structure

    std::cout << "Enter name of Pizza service: ";
    std::cin >> ps->name;              // method 1 for member access
    std::cout << "Enter diameter of pizza: ";
    std::cin >> (*ps).diameter;                // method 2 for member access
    std::cout << "Enter weigth: ";
    std::cin >> ps->weigth;

    std::cout << "Name: " << (*ps).name << std::endl;               // method 2
    std::cout << "Diameter: " << ps->diameter << " mm\n";           // method 1
    std::cout << "Weigth: " << ps->weigth << std::endl;            // method 1  
  std::cout << std::endl;
    delete ps;                          // free memory used by structure
    return 0;
}