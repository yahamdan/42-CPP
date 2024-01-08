
#include "PmergeMe.hpp"

bool checkifdigit( std::string str )
{
    for ( size_t i = 0 ; i < str.size() ; i++ )
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

int main( int ac , char **av )
{
    if ( ac > 1)
    {
        double vtime , dtime;
        std::vector<int> vec;
        std::deque<int> deq;
        for (int i = 1 ; av[i]; i++){
            if ( checkifdigit(av[i]) ){

                vec.push_back(atof(av[i]));
                deq.push_back(atof(av[i]));
            }
            else{
                std::cout << "Error" << std::endl;
                return 1;
            }   
        }
        
        std::cout << "Before : ";
        for ( size_t i = 0 ; i < vec.size() ; i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
        
        vtime = vSort( vec );
        
        dtime = dSort( deq );
        
        std::cout << "After : ";
        for ( size_t i = 0 ; i < vec.size() ; i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;

        std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vtime << std::endl;
        std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << dtime << std::endl;
    }
    else
        std::cout << "Error" << std::endl;
}
