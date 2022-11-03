// ex410.cc -- 40-yd dash array
#include <iostream>
#include <iomanip>
#include <array>

int main()
{
  const int size{3};
  std::array<float, size> times;         // create array object of 3 floats
  float total{}, average{};

times[0] = 16.2;
times[1] = 19.36;
times[2] = 11.25;

for (float elemento : times) 
{
    std::cout <<  std::setw(6)  << elemento << std::endl;
    total += elemento;
}    
average = total / times.size();

std::cout << "The average time is " << average << " seconds." << std::endl;
  
  std::cout << std::endl;
}