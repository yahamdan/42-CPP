
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    type = "None";
}

Animal::Animal( const Animal& other)
{
    *this = other;
}

Animal& Animal::operator= ( const Animal& other )
{
    if (this != &other )
        *this = other;
    return *this;
}

std::string Animal::getType() const
{
    return type;
} 

void    Animal::setType( std::string type )
{
    this->type = type;
}

void    Animal::makeSound() const
{
    std::cout << "No type has been specified yet!" <<  std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}