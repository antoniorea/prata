// ex52.cc -- reading more than one word with getline
#include <iostream>
#include <string>
int main()
{
/*     using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize]; */
    std::string name;
    std::string dessert;

    std::cout << "Enter your name:\n";
    getline(std::cin, name);  // reads through newline
    std::cout << "Enter your favorite dessert:\n";
    getline(std::cin, dessert);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << ".\n";
    return 0;
}