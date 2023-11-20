
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
        this->name = other.name;
        this->setSlot( other.getSlot() );
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
            slot[i] = m;
            list.AddToList( new node(slot[i]) );
            return ;
        }
    }
    list.AddToList( new node(m) );
}

void    Character::unequip( int idx )
{
    if ( idx >= 0 && idx < 4 )
    {
        list.AddToList( new node(slot[idx]) );
        slot[idx] = NULL;
    }
}

void Character::use( int idx , ICharacter& target )
{
    if ( idx >= 0 && idx < 4 && slot[idx] )
        slot[idx]->use( target );
}

std::string const& Character::getName() const
{
    return name;
}

Character::~Character()
{

}
