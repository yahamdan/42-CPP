#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Constructor called" << std::endl;
    b = new Brain();
    type = "Dog";
}

Dog::Dog( const Dog& other )
{
    std::cout << "Dog Constructor called" << std::endl;
    b = new Brain();

    b->setIdeas( other.b->getIdeas() );
}

Dog& Dog::operator= ( const Dog& other )
{
    if ( this != &other )
       b->setIdeas( other.b->getIdeas() );
    return *this;
}   

void    Dog::makeSound() const
{
    std::cout << "Bark!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete b;
}