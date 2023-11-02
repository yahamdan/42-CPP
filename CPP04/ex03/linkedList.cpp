#include "linkedList.hpp"

linkedList::linkedList()
{
    list = NULL;
}

linkedList::linkedList( const linkedList& other )
{
    *this = other;
}

linkedList& linkedList::operator=( const linkedList& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}

void   linkedList::AddToList( void * l )
{
    node *newnode = new node();
    
    newnode->address = l;
    
    if (list == NULL)
    {
        list = newnode;
        return;
    }
    
    node *tmp = list;
    
    while ( tmp->next )
        tmp = tmp->next;
    tmp->next = newnode;
}

linkedList::~linkedList()
{
    node *x;
    while( list && list->next )
    {
        x = list;
        list = list->next;
        delete x;
    }
}