#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed = 0;
}

Fixed::Fixed( const int number )
{
    fixed = number << FBN;
}

Fixed::Fixed( const float number )
{
    fixed = ( int )( roundf( number * (1 << FBN) ) );
}

Fixed::Fixed( const Fixed& other )
{
    *this = other;
}

Fixed& Fixed::operator=( const Fixed& other )
{
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
    return ( fixed / pow(2, FBN) );
}

int Fixed::toInt( void ) const
{
    return ( fixed / pow(2, FBN) );
}

bool Fixed::operator> ( const Fixed& other )
{
    return( this->fixed > other.fixed );
}

bool Fixed::operator< ( const Fixed& other )
{
    return( this->fixed < other.fixed );
}

bool Fixed::operator>= ( const Fixed& other )
{
    return( this->fixed >= other.fixed );
}

bool Fixed::operator<= ( const Fixed& other )
{
    return( this->fixed <= other.fixed );
}

bool Fixed::operator== ( const Fixed& other )
{
    return( this->fixed == other.fixed );
}

bool Fixed::operator!= ( const Fixed& other )
{
    return( this->fixed != other.fixed );
}

Fixed Fixed::operator+ ( const Fixed& other )
{
    Fixed temp;
    temp.setRawBits( this->getRawBits() + other.getRawBits() );
    return temp;
}

Fixed Fixed::operator- ( const Fixed& other )
{
    Fixed temp;
    temp.setRawBits( this->getRawBits() - other.getRawBits() );
    return temp;
}

Fixed Fixed::operator* ( const Fixed& other )
{
    Fixed temp;
    temp.setRawBits( this->getRawBits() * other.getRawBits() / ( 1 << FBN ) );
    return temp;
}

Fixed Fixed::operator/ ( const Fixed& other )
{
    Fixed temp;
    temp.setRawBits( this->getRawBits() / other.getRawBits() * ( 1 << FBN ) );
    return temp;
}

Fixed    Fixed::operator++ ()
{
    fixed++;
    return ( *this );
}

Fixed    Fixed::operator-- ()
{
    fixed--;
    return ( *this );
}

Fixed    Fixed::operator++ ( int )
{
    Fixed   inc( *this );
    fixed++;
    return ( inc );
}

Fixed    Fixed::operator-- ( int )
{
    Fixed   dec( *this );
    --fixed;
    return ( dec );
}

Fixed& Fixed::min( Fixed& a , Fixed& b )
{
    if ( a.fixed > b.fixed )
        return b;
    else
        return a;
}

Fixed& Fixed::max( Fixed& a , Fixed& b )
{
    if ( a.fixed > b.fixed )
        return a;
    else
        return b;
}

const Fixed& Fixed::min( const Fixed& a , const Fixed& b )
{
    if ( a.fixed > b.fixed )
        return b;
    else
        return a;
}

const Fixed& Fixed::max( const Fixed& a , const Fixed& b )
{
    if ( a.fixed > b.fixed )
        return a;
    else
        return b;
}

int Fixed::getRawBits() const
{
    return ( fixed );
}

void Fixed::setRawBits(int const raw)
{
    fixed = raw;
}

Fixed::~Fixed(){
}
