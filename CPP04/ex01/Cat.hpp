
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    class Brain *b;
public: 
    Cat();
    Cat( const Cat& other );
    Cat& operator=( const Cat& other );
    
    void    makeSound() const;
    
    ~Cat();
};
