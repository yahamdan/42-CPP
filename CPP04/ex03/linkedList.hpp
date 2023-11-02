#pragma once

#include "AMateria.hpp"

class node
{
public :
    void *address;
    node *next;
    node();
    node( const node& other );
    node& operator= ( const node& other );
    ~node();
};

class linkedList
{
private :
    node *list;
public: 
    linkedList();
    linkedList( const linkedList& other );
    linkedList& operator= ( const linkedList& other );
    
    void AddToList( void * list );
    ~linkedList();
}