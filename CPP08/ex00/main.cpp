
#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vec;
    
    for ( int i = 0 ; i < 4 ; i++ )
        vec.push_back( i + 1 );
    try{
        
        std::cout << easyfind( vec , 4 ) << std::endl;
    }
    catch( std::exception & e )
    {
        std::cout << e.what() << std::endl;
    }
}
