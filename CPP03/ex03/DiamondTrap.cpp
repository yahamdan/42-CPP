#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("None_clap_name")
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    name = "None";
    hitPoint = 100;
    energyPoints = 50;
    attackDamage = 30;
}

DiamondTrap::DiamondTrap( std::string Name ) : ClapTrap( Name + "_clap_name")
{
    std::cout << "DiamondTrap initialized constructor called" << std::endl;
    name = Name;
    hitPoint = 100;
    energyPoints = 50;
    attackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
    *this = other;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}

void    DiamondTrap::whoAmI()
{
    std::cout << name << std::endl;
    std::cout << ClapTrap::name  << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}