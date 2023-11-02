#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0 ; i < 4 ; i++)   
        slot[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
    *this = other;
}

MateriaSource& MateriaSource::operator= ( const MateriaSource& other )
{
    if ( this != &other)
        setSlot( other.getSlot() );
    return *this;
    
}

AMateria* MateriaSource::getSlot() const
{
    return *slot;
}

void    MateriaSource::setSlot( AMateria * tmp )
{
    for ( int i = 0 ; i < 4 ; i++ )
        *slot[i] = tmp[i];
}

void    MateriaSource::learnMateria( AMateria * newM )
{
    for (int i  = 0 ; i < 4 ; i++ )
    {
        if ( slot[i] == 0)
        {
            slot[i] = newM;
            return ;
        }
    }
}

AMateria*   MateriaSource::createMateria( std::string const& type )
{
    for ( int i = 0 ; i < 4 ; i++ )
    {
        if ( slot[i]->getType() == type )
            return slot[i]->clone();
    }
    return 0;
}

MateriaSource::~MateriaSource()
{
    for ( int i = 0 ; i < 4 ; i++)
    {
        if (slot[i])
            delete slot[i];
    }
}