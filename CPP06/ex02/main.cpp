
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base * base = generat( );
    
    identify( base );
    identify( *base );
}