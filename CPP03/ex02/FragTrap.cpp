#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    name = "None";
    hitPoint = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
    std::cout << "FragTrap initialized constructor called" << std::endl;
    this->name = name;
    hitPoint = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& other )
{
    *this = other;
}

FragTrap& FragTrap::operator=( const FragTrap&other )
{
    if ( this != &other)
        *this = other;
    return *this;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "High five" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}