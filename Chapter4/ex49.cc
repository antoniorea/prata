// ex56.cc -- array od structures
// 
#include <iostream>
#include <iomanip>
#include <string>
//  #include <cstdio>
    struct CandyBar
    {
        std::string name;
        double weigth;
        unsigned short calorias;
    };

int main()
{
  
CandyBar myarray [] {
   {"Mocha Munch", 2.3, 350},
   {"Chocolate con leche", 1.32, 620},
   {"Aldy", 6.35, 555}
};
CandyBar* yourpointer = new CandyBar[3];

    yourpointer[0].name = "Mocha Munch";
    yourpointer[0].weigth = 2.3;
    yourpointer[0].calorias = 350;

    yourpointer[1].name = "Super Snack";
    yourpointer[1].weigth = 3.5;
    yourpointer[1].calorias = 420;
    
    yourpointer[2].name = "Chocosnack";
    yourpointer[2].weigth = 3.1;
    yourpointer[2].calorias = 230;
     for ( auto elemento : yourpointer) 
    {
      std::cout <<  std::setw(6)  << elemento.name ;
      std::cout <<  std::setw(6)  << elemento.weigth ;
      std::cout <<  std::setw(6)  << elemento.calorias 
      << std::endl;
    }    



  
  std::cout << std::endl;
}