// outfile.cc --   writing to a file
#include <iostream>
#include <fstream>              // for file I/O

int main()
{
char automobile[50];
int year;
double a_price;
double d_price;

std::ofstream fcout;                // create object for output
fcout.open("carinfo.txt");          // associate with a file

std::cout << "Enter the make and model of automobile : ";
std::cin.getline(automobile , 50) ;
std::cout << "Enter the model year : ";
std::cin >> year;
std::cout << "Enter the original asking price: : ";
std::cin >> a_price;

d_price =  0.913 * a_price;         // discount price

std::cout << std::endl;
std::cout << std::fixed;
std::cout.precision(2);
std::cout.setf(std::ios_base::showpoint);
std::cout << "Make and model : " << automobile << std::endl;
std::cout << "Year : " << year << std::endl;
std::cout << "Ask price : " << a_price << std::endl;
std::cout << "Now price : " << d_price << std::endl;

// now do exact same things using fcout instead of cout
fcout << std::fixed;
fcout.precision(2);
fcout.setf(std::ios_base::showpoint);
fcout << "Make and model : " << automobile << std::endl;
fcout << "Year : " << year << std::endl;
fcout << "Ask price : " << a_price << std::endl;
fcout << "Now price : " << d_price << std::endl;
fcout.close();
return 0;
}