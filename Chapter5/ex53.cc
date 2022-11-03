// ex53.cc -- the sum of all the numbers introduced
#include <iostream>

int main()
{

int total{}, a;
std::cout << "Please enter a number( 0 to exit ) : ";
std::cin >> a; 

while ( a != 0 )
{
    total += a;
    std::cout << "\nPlease other number( 0 to exit ) : ";
    std::cin >> a;
}    

std::cout << "the sum of all the numbers is : "<< total << std::endl;

}