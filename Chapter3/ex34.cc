// ex34.cc -- seconds to days
#include <iostream>
#include <cstdio> 

int main ()
{
    unsigned short const SECONDS_MINUTE {60};
    unsigned short const MINUTES_HOUR {60};
    unsigned short const HOURS_DAY {24};
    unsigned long seconds{}, minutes{}, hours{};
    unsigned short minutos{}, horas{}, dias{}, segundos{};

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    segundos = seconds % SECONDS_MINUTE;
    minutes = seconds / SECONDS_MINUTE;
    
    minutos = minutes % MINUTES_HOUR;
    hours = minutes / MINUTES_HOUR;
 
    horas = hours % HOURS_DAY;
    dias = hours / HOURS_DAY;

    printf("%d seconds = %d days,%d hours,%d minutes,%d seconds\n", 
        seconds, dias, horas, minutos, segundos);
    return 0;
}