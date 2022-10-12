// floor_area.cc -- using the sqrt() function

#include <iostream>
#include <cmath>    // or math.h

int main()
{
    //  using namespace std;

    double area;
    std::cout << "Enter the floor area, in square feet, of your home: ";
    std::cin >> area;
    double side;
    side = sqrt(area);
    std::cout << "That's the equivalent of a square " << side
         << " feet to this side." << std::endl;
    std::cout << "How fascinating!" << std::endl;
    return 0;
}