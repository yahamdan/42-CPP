
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    type = "None";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other)
{
    *this = other;
}

WrongAnimal& WrongAnimal::operator= ( const WrongAnimal& other )
{
    if (this != &other )
        this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
} 

void    WrongAnimal::setType( std::string type )
{
    this->type = type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "No type has been specified yet!" <<  std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
