
#pragma once
orithms.
#include <iostream>
#include <stack>
#include <deque>


template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
    MutantStack() {}
    MutantStack( const MutantStack& other ){ this = other; }
    MutantStack& operator= ( const MutantStack& other )
    {
        if ( this != other ) 
            return *this;
    }
    
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    
    iterator begin(){ return this->c.begin();}
   
    iterator end(){ return this->c.end();}
    
    reverse_iterator rbegin(){ return this->c.rbegin();}
    
    reverse_iterator rend(){ return this->c.rend();}
    
    ~MutantStack(){}
};