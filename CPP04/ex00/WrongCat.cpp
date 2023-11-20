
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat Constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal( other )
{
    *this = other;
}

WrongCat& WrongCat::operator= ( const WrongCat& other )
{
    if ( this != &other )
        return *this;
    return *this;
}   

void    WrongCat::makeSound() const 
{
    std::cout << "Woof!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}