#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        ideas[i] = "idea";
}

Brain::Brain( const Brain& other )
{
    std::cout << "Brain constructor called" << std::endl;
    *this = other;
}

Brain& Brain::operator= ( const Brain& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}

std::string *Brain::getIdeas()
{
    return ideas;
}

void    Brain::setIdeas( std::string *id )
{
    for (int i = 0 ; i < 100 ; i++ )
        ideas[i] = id[i];
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}