#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.\n";
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}


void    Harl::complain( std::string level )
{
    int i = -1;
    std::string std[4] = { "DEBUG", "INFO" , "WARNING" , "ERROR"};
   void (Harl::*HerlComments[4])() = { &Harl::debug , &Harl::info , &Harl::warning , &Harl::error };
    
    while(++i < 4)
    {
        if (!level.compare(std[i]))
        {
            (this->*HerlComments[i])();
            return ;
        }
    }
    std::cout << "Invalid Comment" << std::endl;   
}
