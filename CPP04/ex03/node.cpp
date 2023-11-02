#include "node.hpp"

node::node()
{
    address = NULL;
    next = NULL;
}

node::node( const node& other )
{
    *this = other;
}

node& node::operator= ( const node& other )
{
    if ( this != &other )
        *this = other;
    return *this;
}

node::~node()
{
}