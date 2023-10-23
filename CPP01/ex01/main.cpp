#include "Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(5, "yaya");
    for(int i = 0; i < 5; i++)
        z[i].announce();

    Zombie *l = zombieHorde(3, "sui");
    for(int i = 0; i < 3; i++)
        l[i].announce();

    delete[] z;
    delete[] l;
}