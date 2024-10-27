#include <iostream>
#include "Harl.hpp" 

using namespace std;

void Harl::debug()
{
    std ::cout << "I love having extra bacon for my " << std ::ends
               << "7XL-double-cheese-triple-pickle-specialketchup burger." << std ::ends
               << " I really do!" << std ::endl;
}

void Harl::info()
{

    std ::cout << "I cannot believe adding extra bacon costs" << std ::ends
               << " more money. You didn’t put enough bacon in my burger!" << std ::ends
               << " If you did, I wouldn’t be asking for more!" << std ::endl;
}

void Harl::warning()
{
    std ::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" << std ::ends
               << " years whereas you started working here since last month." << std ::ends
               << std ::endl;
}

void Harl::error()
{
    std ::cout << "This is unacceptable! I want to speak to the manager now." << std ::endl;
}

enum string_code {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID
};

string_code hashit (std::string const& inString) {
    if (inString == "DEBUG") return DEBUG;
    if (inString == "INFO") return INFO;
    if (inString == "WARNING") return WARNING;
    if (inString == "ERROR") return ERROR;
    return INVALID;
};

void Harl::complain(std::string level)
{
    switch (hashit(level))
    {
    case DEBUG:
        std::cout << "[ DEBUG ]" << std::endl;
        debug();
        std :: cout << std :: endl;
    case INFO:
        std::cout << "[ INFO ]" << std::endl;
        info();
        std :: cout << std :: endl;
    case WARNING:
        std::cout << "[ WARNING ]" << std::endl;
        warning();
        std :: cout << std :: endl;
    case ERROR:
        std::cout << "[ ERROR ]" << std::endl;
        error();
        std :: cout << std :: endl;
        break;
    default:
        std::cout << "Probably complaining about insignificant problems" << std::endl;
        break;
    }
}

