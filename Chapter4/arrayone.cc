// arrayone.cpp -- small arrays of integers
#include <iostream>

int main()
{
//    using namespace std;
    int yams[] { 7, 8, 6};    // create array with three elements
    int yamcosts[] {20, 30, 5};  // create, initialize array

    unsigned total{};
    std::cout << "Total yams = ";
    for ( auto element : yams )
        total += element;
    std::cout << total << std::endl;

    std::cout <<"The package with " << yams[1] << " yams costs ";
    std::cout << yamcosts[1] << " cents per yam.\n";
    total = 0;
    const size_t old_school_size = sizeof(yams) / sizeof(yams[0]);
    for (size_t i {} ; i < old_school_size ; ++i)
            total += yams[i] * yamcosts[i] ;
    
    std::cout << "The total yam expense is " << total << " cents.\n";

    std::cout << "\nSize of yams array = " << sizeof yams;
    std::cout << " bytes.\n";
    std::cout << "Size of one element = " << sizeof yams[0];
    std::cout << " bytes.\n";
    return 0;
}