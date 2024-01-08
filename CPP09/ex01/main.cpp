
#include "RPN.hpp"

int main( int ac , char **av )
{
    if ( ac == 2 )
    {
        try 
        {
            std::cout << RPN( av[1] ) << std::endl;
        }
        catch ( std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "Error: bad argument" << std::endl;
}