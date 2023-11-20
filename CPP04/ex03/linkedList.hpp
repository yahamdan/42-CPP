
#pragma once

#include "AMateria.hpp"
#include "node.hpp"

class linkedList
{
public: 
    node *head;
    linkedList();
    linkedList( const linkedList& other );
    linkedList& operator=( const linkedList& other );
    void AddToList( node* l );

    ~linkedList();
};

extern linkedList list;
