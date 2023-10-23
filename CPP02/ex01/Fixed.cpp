#include "Fixed.hpp"

const int Fixed::FBN = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed = 0;
}

Fixed::Fixed( const int number )
{
    std::cout << "Int constructor called" << std::endl;
    fixed = number << FBN;
}

Fixed::Fixed( const float number )
{
    std::cout << "Float constructor called" << std::endl;
    fixed = ( int )( roundf( number * (1 << FBN) ) );
}

Fixed::Fixed( const Fixed& other )
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=( const Fixed& other )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &other )
        this->fixed = other.fixed;
    return *this;
}

std::ostream& operator<< ( std::ostream& os , const Fixed& other )
{
    os << other.toFloat();
    return os;
}

float Fixed::toFloat( void ) const
{
    return ( fixed / pow( 2 , FBN ) );
}

int Fixed::toInt( void ) const
{
    return ( fixed / pow( 2 , FBN ) );
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return ( fixed );
}

void Fixed::setRawBits(int const raw)
{
    fixed = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
