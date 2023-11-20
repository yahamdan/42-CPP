
#include "Ice.hpp"

Ice::Ice () : AMateria( "ice" )
{
}

Ice::Ice( const Ice& other ) : AMateria( other )
{
    *this = other;
}

Ice& Ice::operator= ( const Ice& other )
{
    if ( this != &other )
       return *this;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice();
}

void    Ice::use( ICharacter& target ) 
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}
