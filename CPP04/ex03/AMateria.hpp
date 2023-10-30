#pragma once

#include "iostream"

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria( std::string const & type );
    AMateria& operator= ( const AMateria& other );
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    //virtual void use( ICharacter& target );
    virtual ~AMateria();
};