// ex51.cc -- Introducing dates
// Floating-point control in a for loop (corrected)
#include <iostream>
#include <iomanip>
#include <string>
//  #include <cstdio>

int main()
{
  
    struct CandyBar
    {
        std::string name;
        double weigth;
        unsigned short calorias;
    };

    CandyBar snack {"Mocha Munch", 2.3, 350};    

    //  printf("Here’s the information in a single string: %s, %s\n", lname, fname);
    std::cout << "Here’s the information of a : " << snack.name << " , weigth : "
    << snack.weigth << " , calories : " << snack.calorias;
  
  std::cout << std::endl;
}