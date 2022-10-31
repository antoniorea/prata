// ex56.cc -- array od structures
// 
#include <iostream>
#include <iomanip>
#include <string>
//  #include <cstdio>

int main()
{
  
    struct Pizza
    {
        std::string name;
        unsigned short diameter;
        double weigth;        
    };

Pizza myarray [] {
   {"TelePizza",  350, 2.3},
   {"Pizza Italiana",  620, 1.32},
   {"Mr.Pizza",  555 , 6.35}
};
    for ( auto elemento : myarray) 
    {
      std::cout <<  std::setw(6)  << elemento.name ;
      std::cout <<  std::setw(6)  << elemento.weigth ;
      std::cout <<  std::setw(6)  << elemento.diameter 
      << std::endl;
    }   

  
  std::cout << std::endl;
}