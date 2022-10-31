// cin2.cc -- reading chars with cin.get()
#include <iostream>

int main ()
{
int ch;                                     // should be int, not char
int count{};

std::cout << "Enter characters; enter EOF to quit:\n";

while((ch = std::cin.get()) != EOF)         // test for end-of-file  & getchar()
{
    std::cout.put(char(ch));                      //  putchar()
    ++count;    
}
std::cout << std::endl << count << " characters read\n";
    return 0;
}