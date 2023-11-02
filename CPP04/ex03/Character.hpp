#pragma once 

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    class AMateria *slot[4];
    
public:
    Character();
    Character( std::string name );
    Character( const Character& other );
    Character& operator= ( const Character& ohter );
    AMateria* getSlot() const;
    void    setSlot( AMateria * tmp );
    void    equip( AMateria* m );
    void    unequip( int idx );
    void    use( int idx , ICharacter& target );
    std::string const & getName() const;

    ~Character();

};