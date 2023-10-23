#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixed;
    static const int FBN;
public:
    Fixed();
    Fixed( const int number );
    Fixed( const float number );
    Fixed( const Fixed& other );
    Fixed& operator= ( const Fixed& other );
    
    bool   operator> ( const Fixed& other );
    bool   operator< ( const Fixed& other );
    bool   operator>= ( const Fixed& other );
    bool   operator<= ( const Fixed& other );
    bool   operator== ( const Fixed& other );
    bool   operator!= ( const Fixed& other );
    
    Fixed operator+ ( const Fixed& other );
    Fixed operator- ( const Fixed& other );
    Fixed operator* ( const Fixed& other );
    Fixed operator/ ( const Fixed& other );
    
    Fixed   operator++ ( );
    Fixed   operator-- ( );
    Fixed   operator++ ( int );
    Fixed   operator-- ( int );
    
    static  Fixed& min( Fixed& a , Fixed& b );
    static  Fixed& max( Fixed& a , Fixed& b );
    
    static const Fixed& min( const Fixed& a , const Fixed& b );
    static const Fixed& max( const Fixed& a , const Fixed& b );
    
    int	 getRawBits( void ) const;
	void setRawBits( int const raw );
    
    float   toFloat( void ) const;
    int     toInt( void ) const;
    
    ~Fixed();
};

std::ostream& operator<< ( std::ostream& os , const Fixed& other );

#endif