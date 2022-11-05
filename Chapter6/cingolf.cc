// cingolf.cc --  non-numeric input skipped
#include <iostream>
const int Max{5};

int main()
{
int golf[Max];
double total{};
// get data
std::cout << "Please enter your golf scores.\n";
std::cout << "You must enter " << Max << " rounds.\n " ;

for( size_t i= 0; i < Max ; ++i)
{
    std::cout << "round #" << i+1 << ": ";
    while(!(std::cin>> golf[i]))
    {
        std::cin.clear();                        // reset input
        while (std::cin.get() != '\n')
            continue;                           // get rid of bad input
        std::cout << "Please enter a number: ";
    }
}
// calculate average
for(auto elemento : golf)
    total += elemento;


// report results
    std::cout << total / Max << " = average score "
    << Max << "  rounds\n";
    std::cout << "Done.\n";

    return 0;
}