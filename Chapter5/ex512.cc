// ex512.cc -- the sum of all the integers between and including the two integers
#include <iostream>
void swap(int* , int* );        // funcion q intercambia el valor de dos variables

int main()
{
int inf, sup, total{};
std::cout << "Please enter two numbers(Integers) : ";
std::cin >> inf >> sup;

if (inf > sup)
    swap( &inf , &sup );

for ( int i = inf ; i <= sup ; ++i)
    total += i;

std::cout << "the sum of all the integers between "<< inf 
<< " and "  << sup << "  is : "<< total << std::endl;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}