#pragma once

#include <iostream>
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