#include "HumanB.hpp"

HumanB::HumanB( std::string nname )
{
    name = nname;
}

void HumanB::setWeapon( Weapon& nWeap )
{
    weap = &nWeap;
}

void HumanB::attack()
{
    std::cout << name << "  attacks with their " << weap->getType() << std::endl;
}
