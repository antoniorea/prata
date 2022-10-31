// ex51.cc -- Introducing dates
// Floating-point control in a for loop (corrected)
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  
    std:: string fname ,lname;
    unsigned short age;
    char grade;
    
    std:: cout << "What is your first name ? ";    
    getline(std::cin, fname);
    std:: cout << "What is your last name ? ";
    std:: cin >> lname;
    std:: cout << "What letter grade do you deserve ? ";
    std:: cin >> grade;
    std:: cout << "What is your age ?  ";
    std:: cin >> age;
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Name :" << std::setw(6)
              << lname << " , " << fname << std::endl 
              << "Grade :" <<  std::setw(6) << ++grade 
              << std::endl 
              << "Age :" << std::setw(6) << age ;   
  
  std::cout << std::endl;
}