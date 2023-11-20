
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animals[2];

    for( int i = 0 ; i < 2 ; i++ )
    {
        if ( i < 1 )
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    animals[1]->makeSound();
    animals[0]->makeSound();

    for ( int i = 0 ; i < 2 ; i++ )
        delete animals[i];
}
