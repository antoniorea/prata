// myfirst.cpp -- displays a message
#include <iostream>                             // a PREPROCESSOR directive
#include <string>
import <format>;
                            
int main()                                      // function header
{                                               // start of function body
/* using namespace std;                              make definitions visible */
std::string message1{"Come up and C++ me some time."};
std::string message2{"You won't regret it!"};

std::cout << message1;         // message
std::cout << std::endl;                                    // start a new line
std::cout <<  message2 << std::endl;          // more output
return 0;                                       // terminate main()
}                                               // end of function body
