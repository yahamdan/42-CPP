
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Constructor called" << std::endl;
    b = new Brain();
    type = "Cat";
}

Cat::Cat( const Cat& other ) : Animal( other )
{
    std::cout << "Cat Constructor called" << std::endl;
    b = new Brain();
    b->setIdeas( other.b->getIdeas() );
}

Cat& Cat::operator= ( const Cat& other )
{
    if ( this != &other )
    {
        delete b;
        b = new Brain();
        b->setIdeas( other.b->getIdeas() );
    }
    return *this;
}   

void    Cat::makeSound() const 
{
    std::cout << "meow!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete b;
}