
#include "BitcoinExchange.hpp"
#include <map>

int main( int ac , char **av ) {

    if (ac != 2)
        std::cout << "Error: could not open file." << std::endl;
    else{
        
        BitcoinExchange be;
        std::ifstream input(av[1]);
        std::ifstream infile("data.csv");
        if (infile.is_open() && input.is_open())
        {
            be.Mapping( infile );
            be.Exchange( input );
            infile.close();
            input.close();
        }
        else
            std::cout << "Error: could not open file." << std::endl;
    }
}
