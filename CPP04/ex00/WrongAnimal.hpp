#pragma once

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal( const WrongAnimal& other );
    WrongAnimal& operator= ( const WrongAnimal& other );
    ~WrongAnimal();

    std::string    getType() const;
    void    setType( std::string type );
    void    makeSound() const;
    
};