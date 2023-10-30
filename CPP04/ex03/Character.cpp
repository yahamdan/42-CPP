#include "Character.hpp"

Character::Character()
{
    name = "None";
    for ( int i = 0 ; i < 4 ; i++ )
        slot[i] = NULL;
}

Character::Character( std::string name )
{
    this->name = name;
    for ( int i = 0 ; i < 4 ; i++ )
        slot[i] = NULL;
}

Character::Character( const Character& other )
{
    *this = other;
}

Character& Character::operator= ( const Character& other )
{
    if ( this != &other ){
        setSlot( other.getSlot() );
    }
    return *this;
}

AMateria* Character::getSlot() const
{
    return *slot;
}

void    Character::setSlot( AMateria * tmp )
{
    for ( int i = 0 ; i < 4 ; i++ )
        *slot[i] = tmp[i];
}

void    Character::equip( AMateria *m )
{
    for ( int i = 0 ; i < 4 ; i++ )
    {
        if ( slot[i] == 0 ){
            slot[i] = m->clone();
            break;
        }
    }
}

Character::~Character()
{

}