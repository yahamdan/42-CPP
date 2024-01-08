
#include "Span.hpp"

Span::Span( unsigned int n ) : N(n){}

Span::Span( const Span& other )
{
    *this = other;
}

Span& Span::operator= ( const Span& other )
{
    if ( this != &other )
    {
        N = other.N;
        vec = other.vec;
    }
    return *this;
}

void Span::addNumber( int n )
{
    try{
        if ( vec.size() + 1 > N )
            throw std::out_of_range( "out of range" );
        vec.push_back( n );
    }
    catch ( std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }
}

void    Span::addNumber( std::vector<int>& t)
{
    try{
        vec.insert(vec.begin() + vec.size(), t.begin(), t.end());
        if ( vec.size() > N )
            throw std::out_of_range( "out of range" );
    }
    catch ( std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }
}

int Span::longestSpan()
{
    std::sort(vec.begin(), vec.end());
    return (*( vec.end() - 1 ) - *vec.begin());
}

int Span::shortestSpan()
{
    int span;
    std::sort(vec.begin(), vec.end());
    span = vec[1] - *vec.begin();
    for (unsigned int i = 0 ; i < vec.size() -1 ; i++ )
    {
        if ( vec[i + 1] - vec[i] < span )
            span = vec[i + 1] - vec[i];
    }
    return span;
}


Span::~Span(){}