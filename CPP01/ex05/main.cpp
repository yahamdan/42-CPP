#include "Harl.hpp"

int main()
{
    Harl _harl;

    _harl.complain("DEBUG");
    
    std::cout << std::endl;
    
    _harl.complain("INFO");
    
    std::cout << std::endl;
    
    _harl.complain("WARNING");
    
    std::cout << std::endl;
    
    _harl.complain("ERROR");
    
    std::cout << std::endl;
    
    _harl.complain("Hello kitty");
    
}