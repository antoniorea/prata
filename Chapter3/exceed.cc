// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0          // makes ZERO symbol for 0 value
#include <climits>      // defines INT_MAX as largest int value
int main()
{
    //  using namespace std;
    short sam {SHRT_MAX};       // initialize a variable to max value
    unsigned short sue = sam;   // okay if variable sam already defined

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl
         << "Add $1 to each account." << std::endl << "Now ";
    sam += 1;
    sue += 1;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.\nPoor Sam!" << std::endl;

    sam = ZERO;
    sue = ZERO;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl;
    std::cout << "Take $1 from each account." << std::endl << "Now ";
    sam -= 1;
    sue -= 1;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl << "Lucky Sue!" << std::endl;
    return 0;
}