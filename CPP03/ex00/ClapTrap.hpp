#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hitPoint;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap( );
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap& other );
    ClapTrap& operator= ( const ClapTrap& other );
    
    void    attack( const std::string& target );
    void    takeDamage( unsigned int amount );
    void    beRapaired( unsigned int amount );

    ~ClapTrap( );
};
