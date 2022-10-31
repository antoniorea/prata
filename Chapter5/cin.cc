#include <iostream>

int main ()
{
char ch;
int count{};

std::cout << "Enter characters; enter EOF to quit:\n";

while(std::cin.get(ch))
{
    std::cout << ch ;
    ++count;    
}

std::cout << std::endl << count << " characters read\n";
    return 0;
}