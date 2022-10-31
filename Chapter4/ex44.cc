// ex51.cc -- Introducing dates
// Floating-point control in a for loop (corrected)
#include <iostream>
#include <iomanip>
#include <string>
//  #include <cstdio>

int main()
{
  
    std:: string fname ,lname;
    unsigned short age;
    char grade;
    
    std:: cout << "What is your first name ? ";    
    getline(std::cin, fname);
    std:: cout << "What is your last name ? ";
    std:: cin >> lname;
    //  printf("Here’s the information in a single string: %s, %s\n", lname, fname);
    std::cout << "Here’s the information in a single string: " << lname << " , "
    << fname;
  
  std::cout << std::endl;
}