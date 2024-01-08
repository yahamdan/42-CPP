#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
   try {
      ShrubberyCreationForm a( "anaya" );
      RobotomyRequestForm d( "howaa" );
      PresidentialPardonForm c( "ardna" );
      Bureaucrat b("kouferka", 8);
      Bureaucrat j( "aankote" , 5);
      a.beSigned( b );
      
      d.beSigned( b );
      c.beSigned( j );
      
      d.execute( j );
      a.execute( b );
      c.execute( j );
      
      std::cout << a << std::endl;
      std::cout << b << std::endl;
      std::cout << c << std::endl;
   }
   catch( std::exception& e)
   {
      std::cout << e.what() << std::endl;
   }
   
}
