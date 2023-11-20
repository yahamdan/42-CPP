
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    class Brain *b;
public: 
    Dog();
    Dog( const Dog& other );
    Dog& operator=( const Dog& other );
    
    void    makeSound() const;
    
    ~Dog();
};
