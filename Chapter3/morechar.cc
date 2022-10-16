// morechar.cc -- the char type and integer type contrasted
#include <iostream>


int main()
{   

    for( char a{'a'}, A{'A'}; a <= 'z' ; a++,A++)    
            std::cout << "The ASCII code for " << a << " is " << short(a) << '\t'            
            << "and for " << A << " is " << short(A) << std::endl;   
    return 0;
}