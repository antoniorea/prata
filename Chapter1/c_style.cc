// c_style.cc -- displays a message
#include <iostream> 
#include "stdio.h"                        // a PREPROCESSOR directive
int main()                                      // function header
{                                               // start of function body
/* using namespace std;                              make definitions visible */
std::cout << "Come up and C++ me some time.";         // message
std::cout << std::endl;                                    // start a new line
std::cout << "You won't regret it!" << std::endl;          // more output

printf("Hola C\n");
return 0;                                       // terminate main()
}                                               // end of function body
