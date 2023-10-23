#include "Zombie.hpp"

int main()
{
	Zombie *z = newZombie("Foo");
	Zombie *p = newZombie("Boo");

	Zombie zom("yaya");
	Zombie zom1("lilo");

	z->announce();
	p->announce();

	randomChump("t + ls");
	randomChump("t 5555555+ ls");

	delete(z);
	delete(p);
}