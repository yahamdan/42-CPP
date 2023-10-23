#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    name = "None";
    hitPoint = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap( std::string Name )
{
    std::cout << "ClapTrap initialized constructor called" << std::endl;
    name = Name;
    hitPoint = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
    *this = other;
}

ClapTrap& ClapTrap::operator= ( const ClapTrap& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}

void    ClapTrap::attack( const std::string& target )
{
    if ( hitPoint > 0 && energyPoints > 0 )
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " ," ;
        std::cout << "causing " << attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cerr << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if ( hitPoint > 0 && energyPoints > 0 )
    {
        std::cout << "ClapTrap " << name << " takes " << amount <<  " of damage." << std::endl;
        this->attackDamage += amount; 
    }
    else
        std::cerr << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void    ClapTrap::beRapaired( unsigned int amount )
{
    if ( hitPoint > 0 && energyPoints > 0 )
    {
        std::cout << "ClapTrap " << name << " repairs itself  " << amount <<  " points." << std::endl;
        this->hitPoint += amount;
        this->energyPoints--;
    }
    else
        std::cerr << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}
