#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(void);
    DiamondTrap( std::string name );
    DiamondTrap( const DiamondTrap& other );
    DiamondTrap& operator=( const DiamondTrap& other );
    
    void    whoAmI();

    ~DiamondTrap(void);

};