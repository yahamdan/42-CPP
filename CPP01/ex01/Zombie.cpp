#include "Zombie.hpp"

Zombie::Zombie(){}

void    Zombie::announce( void )
{
    std::cout << name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name( std::string newname )
{
    name = newname;
}

Zombie::~Zombie()
{
    std::cout << name << " destroyed" << std::endl;
}
