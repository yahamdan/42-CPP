#include "Point.hpp"

float triangleArea( Point const a, Point const b, Point const c )
{
    return ( abs( a.getX() * ( b.getY() - c.getY()) + b.getX() * ( c.getY() - a.getY() )
            + c.getX() * ( a.getY() - b.getY() ) ) /2 );
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    float abcArea = triangleArea( a , b , c );
    float pabArea = triangleArea( point , a , b );
    float pbcArea = triangleArea( point , b , c );
    float pacArea = triangleArea( point , a , c );

    return ( ( abcArea == pabArea + pacArea + pbcArea) && 
        pabArea > 0 && pacArea > 0 && pbcArea > 0);
}