#include "ScavTrap.hpp"

int main()
{
    ScavTrap sTrap("7amd");

    
    sTrap.attack("lio");
    sTrap.guardGate();

    sTrap.beRapaired(30);
}