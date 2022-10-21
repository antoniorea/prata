// ex33.cc -- displays the latitude in decimal format
#include <iostream>
#include <string>
#include <string_view>

int main()
{
unsigned short degrees{}, minutes{}, seconds{};
float  latitude{};
const float SECONDS_IN_MINUTE{60.0};
const float MINUTES_IN_DEGREE{60.0};

std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;  
std::cout << "First, enter the degrees: __\b\b";
std::cin >> degrees;
std::cout << "Next, enter the minutes of arc: __\b\b";
std::cin >> minutes;
std::cout << "Finally, enter the seconds of arc: __\b\b";
std::cin >> seconds;

latitude = degrees + (minutes + seconds / SECONDS_IN_MINUTE) / MINUTES_IN_DEGREE;

std::cout << degrees <<" degrees, "<<  minutes << " minutes, "
<< seconds <<"  seconds = "<< latitude << std::endl;

return 0;
}