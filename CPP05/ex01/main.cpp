#include "Bureaucrat.hpp"


int main()
{
   try {
    
      Form F( "mo" , 7 , 3);
      Bureaucrat b("koufr", 5);
      std::cout << b.getGrade( ) << std::endl ;
      b.signForm(F);
      F.beSigned(b);
      b.signForm(F);
   }
   catch( std::exception& e)
   {
      std::cout << e.what() << std::endl;
   }
   
}