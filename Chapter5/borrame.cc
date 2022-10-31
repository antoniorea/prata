// ex52.cc -- reading more than one word with getline
#include <iostream>
#include <vector>
#include <string>
struct  Fish
{
    std::string kind;
    int weight;
    float length;
};

int main()
{

Fish* pt  = new Fish{ "De latita", 45, 12.3};

std::cout << pt->kind << std::endl;
delete pt;
    return 0;
}