// arrayone1.cpp -- small arrays of integers cstyle
#include <iostream>
#include <cstdio> 

int main()
{
//    using namespace std;
    int yams[] { 7, 8, 6};    // create array with three elements
    int yamcosts[] {20, 30, 5};  // create, initialize array

    unsigned total{};
    for ( auto element : yams )
        total += element;

    printf("Total yams = %d \n", total);
    printf("The package with %d yams costs %d cents per yam.\n", yams[1], yamcosts[1]);
    total = 0;
    const size_t old_school_size = sizeof(yams) / sizeof(yams[0]);    // array length
    for (size_t i {} ; i < old_school_size ; ++i)
            total += yams[i] * yamcosts[i] ;
    
    printf("The total yam expense is %d cents.\n", total );
    printf("\nSize of yams array = %d bytes.\nSize of one element = %d bytes.\n",sizeof yams, sizeof yams[0]);
    return 0;
}