#pragma once

#include "AMateria.hpp"
#include "node.hpp"

class linkedList
{
private :
    node *list;
public: 
    linkedList();
    linkedList( const linkedList& other );
    linkedList& operator= ( const linkedList& other );
    
    void AddToList( void * l );

    ~linkedList();
};