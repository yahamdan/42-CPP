#include "linkedList.hpp"

linkedList::linkedList()
{
    head = NULL;
}

// linkedList::linkedList( const linkedList& other )
// {
//     *this = other;
// }

// linkedList& linkedList::operator=( const linkedList& other )
// {
//     if ( this != &other )
//         *this = other;
//     return *this;
// }

void   linkedList::AddToList( void * l )
{
    node *newnode = new node();
    
    newnode->address = l;
    newnode->next = NULL;
    
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    
    node *tmp = head;
    
    while ( tmp->next )
        tmp = tmp->next;
    tmp->next = newnode;
}

linkedList::~linkedList()
{
    node *x = head;
    while( head )
    {
        x = head;
        head = head->next;
        delete x;
    }
}