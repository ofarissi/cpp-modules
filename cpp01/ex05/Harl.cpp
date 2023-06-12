#include    "Harl.hpp"

void Harl::debug() {
        std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    }

void Harl::info() {
        std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

void Harl::warning() {
        std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

void Harl::error() {
        std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
    }

// returnType (ClassName::*ptrName)(parameters)
// ptrName = &ClassName::memberFunction;
void    Harl::complain(std::string level)
{
    void    (Harl::*ptr)();

    if (level == "DEBUG")
    {
        ptr = &Harl::debug;
        (this->*ptr)();
    }
    else if (level == "INFO")
    {
        ptr = &Harl::info;
        (this->*ptr)();
    }
    else if (level == "WARNING")
    {
        ptr = &Harl::warning;
        (this->*ptr)();
    }
    else if (level == "ERROR")
    {
       ptr = &Harl::error;
       (this->*ptr)();
    }
    else {
        std::cout << "Invalid complaint level!" << std::endl;
    }
}