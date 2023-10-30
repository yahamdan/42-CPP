#include "AMateria.hpp"

AMateria::AMateria()
{    
}

AMateria::AMateria( std::string const & type )
{
    this->type = type;
}

AMateria& Amateria::operator= ( const AMateria& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}

std::stirng const & AMateria::getType() const
{
    return type;
}

AMateria::~AMateria()
{
}