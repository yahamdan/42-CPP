#include "Bureaucrat.hpp"

int main()
{
   try {
    
      Bureaucrat b("name", 15);
      std::cout << b.GateGrade( ) << std::endl ;
      b.decrementGrade();
   }
   catch( std::exception& e)
   {
      std::cout << e.what() << std::endl;
   }
}