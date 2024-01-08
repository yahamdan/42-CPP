
#pragma once 
#include <iostream>

template <typename T>
class Array
{
private:
    unsigned int  s;
    T *arr;
public:
    Array() : s(0)
    {
        arr = new T[0];
    }
    
    Array( unsigned int n ) : s(n)
    {
        arr = new T[n];
    }
    
    Array( const Array & other )
    {
        arr = new T[other.size()];
        s = other.size();
        for ( size_t i = 0 ; i < s ; i++)
            this->arr[i] = other.arr[i];
    }
    
    Array& operator= ( const Array & other )
    {       
        if ( this != &other )
        {
            if (arr)
                delete[] arr;
            arr = new T[other.size()];
            s = other.size();
            for ( size_t i = 0 ; i < s ; i++)
                this->arr[i] = other.arr[i];
        }
        return *this;
    }
    
    T& operator[] ( unsigned int index )
    {
        if ( index < this->size() )
            return arr[index];
        else
            throw std::invalid_argument(" invalid index ");
    }
    
    unsigned int size() const
    {
        return s;
    }
    
    ~Array(){
        delete[] arr;
    }
};
