
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    type = "None";
}

Animal::Animal( const Animal& other)
{
    std::cout << "Animal constructor called" << std::endl;
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

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}