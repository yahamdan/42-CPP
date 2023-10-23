#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    hitPoint = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap( std::string Name ) : ClapTrap(Name)
{
    std::cout << "ScavTrap initialized constructor called" << std::endl;
    hitPoint = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& other )
{
    *this = other;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other )
{
    if ( this != &other)
        *this = other;
    return *this;
}

void    ScavTrap::attack( const std::string& target )
{
    if ( hitPoint > 0 && energyPoints > 0 )
    {
        std::cout << "ScavTrap " << name << " attacks " << target << " ," ;
        std::cout << "causing " << attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cerr << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
}