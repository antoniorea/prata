// sumafile.cc -- functions with an array argument
#include <iostream>
#include <fstream>               // file I/O support
#include <cstdlib>               // support for exit()

int main()
{
std::ifstream fcin;
double value, sum{};
int count{};                    // number of items read

fcin.open("score.txt");         // associate inFile with a file
if (!fcin.is_open())          // failed to open file
{
    std::cout << "Could not open the file " << "score.txt" << std::endl;
    std::cout << "Program terminating.\n";
    std::exit(EXIT_FAILURE);
}


fcin >> value;                  // get first value
while(fcin.good())              // while input good and not at EOF
{
    count++;                    // one more item read
    sum += value;                   // calculate running total
    fcin >> value;              // get next value

}
if (fcin.eof())
    std::cout << "End of file reached.\n";
else if (fcin.fail())
    std::cout << "Input terminated by data mismatch.\n";
else
    std::cout << "Input terminated for unknown reason.\n";

if (count == 0)
    std::cout << "No data processed.\n";
else
{
    std::cout << "Items read: " << count << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << sum / count << std::endl;
}
fcin.close();                   // finished with the file
    return 0;
}