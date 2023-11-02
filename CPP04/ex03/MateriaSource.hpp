#pragma once

#include "IMateriaSource.hpp"
#include    "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    class AMateria *slot[4];
public:
    MateriaSource();
    MateriaSource( const MateriaSource& other );
    MateriaSource& operator= ( const MateriaSource& other );
    AMateria* getSlot() const;
    void    setSlot( AMateria * tmp );
    void    learnMateria( AMateria* newM );
    AMateria* createMateria( std::string const& type );
    ~MateriaSource();
};