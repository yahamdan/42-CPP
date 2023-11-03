#pragma once

#include "AMateria.hpp"
#include "node.hpp"

class linkedList
{
private :
public: 
    node *head;
    linkedList();
    // linkedList( const linkedList& other );
    // linkedList& operator= ( const linkedList& other );
    
    void AddToList( node* l );

    ~linkedList();
};