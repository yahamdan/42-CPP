#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animals[4];

    for( int i = 0 ; i < 4 ; i++ )
    {
        if ( i < 2 )
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    animals[1]->makeSound();
    animals[3]->makeSound();

    for ( int i = 0 ; i < 4 ; i++ )
        delete animals[i];
}