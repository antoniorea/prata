// Using a for loop with an array
#include <iostream>

int main()
{

int inf{}, sup{}, temp{};
std::cout << "Please enter two numbers(Integers) : ";
std::cin >> inf >> sup;
if ( inf == sup)        {
        std::cout << "Nothin to do the numbers are equeals "<< std::endl;
            exit ;
        }
elsif(inf > sup){
    temp = sup;
    sup = inf;
    inf = temp;
}
else{

}
    








}