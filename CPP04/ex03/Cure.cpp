
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure& other ) : AMateria( other )
{
    *this = other;
}

Cure& Cure::operator= ( const Cure& other )
{
    if ( this != & other )
        return *this;
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals ";
    std::cout << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
}
