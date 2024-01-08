
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"



Base::~Base()
{
}

Base * generat( void )
{
    srand(time(NULL));
    
    int random = rand() % 3;
    
    switch (random)
    {
    case 0 :
        return new A( "A" );
    case 1 : 
        return new B( "B" );
    case 2 : 
        return new C( "C" );
    
    default:
        return NULL;
        break;
    }
}

void    identify( Base * p )
{
    A * t1 = dynamic_cast<A*>(p);
    if ( t1 != NULL )
        std::cout << t1->getType() << std::endl;
        
    B * t2 = dynamic_cast<B*>(p);
    if ( t2 != NULL )
        std::cout << t2->getType() << std::endl;

    C * t3 = dynamic_cast<C*>(p);
    if ( t3 != NULL )
        std::cout << t3->getType() << std::endl;
}

void    identify( Base & p)
{
    try{

        A & t1 = dynamic_cast<A&>(p);
        std::cout << t1.getType() << std::endl;
    }
    catch ( std::exception & e ){
        
        try{

            B & t2 = dynamic_cast<B&>(p);
            std::cout << t2.getType() << std::endl;
        }
        catch ( std::exception & e ){

            try{

                C & t3 = dynamic_cast<C&>(p);
                std::cout << t3.getType() << std::endl;
            }
            catch ( std::exception & e ) {
                
                std::cerr << e.what() << std::endl;
            }
        }
    }
}
