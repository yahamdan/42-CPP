#include "HumanA.hpp"

HumanA::HumanA( std::string nname ,  Weapon& tWeap ) : name(nname), weap(tWeap)
{
}

void HumanA::attack()
{
    std::cout << name << "  attacks with their " << this->weap.getType() << std::endl;
}
