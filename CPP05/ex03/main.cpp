#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <cstdlib>

int main()
{
     AForm* rrf = NULL;
     try {
          
          Bureaucrat b( "dada" ,  3);
          Intern someRandomIntern;
          rrf = someRandomIntern.makeForm("dasdasd", "Bender");
          b.signForm(*rrf);
          rrf->execute(b);
     }
     catch( std::exception& e)
     {
          std::cout << e.what() << std::endl;
     }
     delete rrf;
     
}
