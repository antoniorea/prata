// ex56.cc -- array od structures
// 
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

CandyBar myarray [] {
   {"Mocha Munch", 2.3, 350},
   {"Chocolate con leche", 1.32, 620},
   {"Aldy", 6.35, 555}
};
    for ( auto elemento : myarray) 
    {
      std::cout <<  std::setw(6)  << elemento.name ;
      std::cout <<  std::setw(6)  << elemento.weigth ;
      std::cout <<  std::setw(6)  << elemento.calorias 
      << std::endl;
    }   

  
  std::cout << std::endl;
}