#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog( const Dog& other )
{
    *this = other;
}

Dog& Dog::operator= ( const Dog& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}   

void    Dog::makeSound() const
{
    std::cout << "Bark!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}