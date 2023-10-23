#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie( std::string newName);
	~Zombie();
	void	announce( void );
	void	set_name( std::string newname );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif