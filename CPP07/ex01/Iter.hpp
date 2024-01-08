
#pragma once

#include <iostream>

template <typename T, typename F> 
void Iter( T *ar , int len , void (*f)( F ) )
{
    for (int i = 0; i < len ; i++ )
        f(ar[i]);
}