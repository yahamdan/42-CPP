#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB
{
private :
    Weapon* weap;
    std::string name;
    
public :
    
    HumanB( std::string nname );
    void  setWeapon( Weapon& nWeap );
    void  attack( void );
};

#endif