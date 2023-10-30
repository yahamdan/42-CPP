#include "Ice.hpp"

Ice::Ice () : AMateria( "ice" )
{
}

Ice::Ice( const Ice& other )
{
    *this = other;
}

Ice& Ice::operator= ( const Ice& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice();
}

void    Ice::use( Icharacter& target )
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << target.name << " *" << std::endl;
}

Ice::~Ice()
{
}