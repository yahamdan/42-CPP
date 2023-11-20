
#pragma once

#include <iostream>
#include "AMateria.hpp"
class node
{
public :
    AMateria* address;
    node *next;

    node();
    node(AMateria* l);
    node( const node& other );
    node& operator= ( const node& other );
    
    ~node();
};
