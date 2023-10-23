#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-";
    std::cout << "special-ketchup burger.\nI really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put ";
    std::cout <<  "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming";
    std::cout << " for years whereas you started working here since last month.\n";
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}


void    Harl::complain( std::string level )
{
    int x = 0;
    std::string std[4] = { "DEBUG", "INFO" , "WARNING" , "ERROR"};
   void (Harl::*HerlComments[4])() = { &Harl::debug , &Harl::info , &Harl::warning , &Harl::error };
    
    for (int i = 0 ; i < 4 ; i++ )
    {
        if (!level.compare(std[i]))
        {
            x = i + 1;
            break ;
        }
    }

    switch (x)
    {
    case 1:
        std::cout << "[ DEBUG ]" << std::endl;
        (this->*HerlComments[0])();
        std::cout << std::endl;
        // Intentional fall-through
    case 2:
        std::cout << "[ INFO ]" << std::endl;
        (this->*HerlComments[1])();
        std::cout << std::endl;
        // Intentional fall-through
    case 3:
        std::cout << "[ WARNING ]" << std::endl;
        (this->*HerlComments[2])();
        std::cout << std::endl;
        // Intentional fall-through
    case 4:
        std::cout << "[ ERROR ]" << std::endl;
        (this->*HerlComments[3])();
        std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}