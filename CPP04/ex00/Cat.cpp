
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat( const Cat& other )
{
    *this = other;
}

Cat& Cat::operator= ( const Cat& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}   

void    Cat::makeSound() const 
{
    std::cout << "meow!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}