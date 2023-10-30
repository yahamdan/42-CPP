#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure& other )
{
    *this = other;
}

Cure& Cure::operator= ( const Cure& other )
{
    if ( this != & other )
        *this = other;
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals ";
    std::cout << target->getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
}