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
    ~Fixed();
    
    int	 getRawBits( void ) const;
	void setRawBits( int const raw );
    
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<< ( std::ostream& os , const Fixed& other );

#endif