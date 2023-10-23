#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie( std::string newname )
{
    name = newname;
}

void    Zombie::set_name( std::string newName )
{
    name = newName;
}

void    Zombie::announce()
{
    std::cout << name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " destroyed" << std::endl;
}
