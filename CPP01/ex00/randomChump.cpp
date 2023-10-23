#include "Zombie.hpp"

void    randomChump( std::string name)
{
	Zombie Zombie;
	Zombie.set_name( name );
	Zombie.announce();
}
