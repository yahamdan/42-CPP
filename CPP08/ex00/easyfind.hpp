
#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
int easyfind( T ar, int n)
{
    typename T::iterator i = std::find( ar.begin(), ar.end(), n);
    if ( i != ar.end() )
        return *i;
    throw std::invalid_argument( "no occurence" );
}
