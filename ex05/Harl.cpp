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
    void (Harl::*ptr)() = nullptr;
    switch (hashit(level))
    {
    case DEBUG:
        ptr = &Harl::debug;
        break;
    case INFO:
        ptr = &Harl::info;
        break;
    case WARNING:
        ptr = &Harl::warning;
        break;
    case ERROR:
        ptr = &Harl::error;
        break;
    default:
        std::cout << "Invalid level" << std::endl;
        return;
    }

    if (ptr != nullptr)
    {
        (this->*ptr)();
    }
}
