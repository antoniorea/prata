// cinfish.cc --  non-numeric input terminates loop
#include <iostream>
const int SIZE{5};

int main()
{
double fish[SIZE];
double total{};

std::cout << "Please enter the weights of your fish.\n";
std::cout << "You may enter up to " << SIZE
<< " fish <q to terminate>.\n";
std::cout << "fish #1: ";

size_t i{};
while( i < SIZE && std::cin >> fish[i])
{
    if (++i < SIZE)
        std::cout << "fish #"<< i + 1 <<": ";
}
for( auto elemento : fish )
    total += elemento;

if( i == 0)
     std::cout << " No fish\n";
else
{
    std::cout << total / i << " = average weight of "
    << i << " fish\n";
    std::cout << "Done.\n";
}
    return 0;
}