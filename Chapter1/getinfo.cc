// getinfo.cc -- input and output
#include <iostream>

int main()
{
    // using namespace std;

    int carrots{};

    std::cout << "How many carrots do you have?" << std::endl;
    std::cin >> carrots;                 // C++ input
    std::cout << "Here are two more. ";
    carrots += 2;
// the next line concatenates output
    std::cout << "Now you have " << carrots << " carrots." << std::endl;
    return 0;
}