
#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    std::vector<int> vec;
    unsigned int N;
public:
    Span( unsigned int n );
    Span( const Span& other );
    Span& operator= ( const Span& other );
    
    void addNumber( int n );
    void addNumber( std::vector<int>& t );
    int  longestSpan();
    int  shortestSpan();
    
    ~Span();
};