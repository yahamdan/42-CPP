#include "Character.hpp"

Character::Character()
{
    list = 0;
    name = "None";
    for ( int i = 0 ; i < 4 ; i++ )
        slot[i] = NULL;
}

Character::Character( std::string name )
{
    list = 0;
    this->name = name;
    for ( int i = 0 ; i < 4 ; i++ )
        slot[i] = NULL;
}

Character::Character( const Character& other )
{
    list = 0;
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
            slot[i] = m;
            return ;
        }
    }
     if (!list){
            list = new linkedList();
    }
    list->AddToList( m );
}

void    Character::unequip( int idx )
{
    if ( idx >= 0 && idx < 4 )
    {
        if (!list){
            list = new linkedList();
        }
        list->AddToList( slot[idx] );
        slot[idx] = 0;
    }
}

void Character::use( int idx , ICharacter& target )
{
    if ( slot[idx] )
        slot[idx]->use( target );
}

std::string const& Character::getName() const
{
    return name;
}

Character::~Character()
{
    for ( int i = 0 ; i < 4 ; i++)
    {
        if (slot[i])
            delete slot[i];
    }
    delete list;
}