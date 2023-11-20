
#include "node.hpp"
#include "AMateria.hpp"

node::node()
{
    address = NULL;
    next = NULL;
}

node::node(AMateria* l)
{
    address = l;
    next = NULL;
}

node::node( const node& other )
{
    *this = other;
}

node& node::operator= ( const node& other )
{
    if ( this != &other )
    {
        this->address = other.address;
        this->next = other.next;
    }
    return *this;
}

node::~node()
{
}
