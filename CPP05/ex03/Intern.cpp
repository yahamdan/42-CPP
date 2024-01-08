
#include "Intern.hpp"

Intern::Intern()
{
       
}

Intern::Intern( const Intern& other )
{
    *this = other;
}

Intern& Intern::operator= ( const Intern& other )
{
    (void) other;
    
    return *this;
}

AForm * Intern::makeForm( std::string FormName , std::string target )
{
    AForm *Form;
    int cs = 0;

    std::string Forms[3] =  { "shrubbery creation" , "robotomy request", "presidential pardon"};
    
    for (int i = 0 ; i < 3 ; i ++ )
    {
        if ( !FormName.compare(Forms[i]) )
        {
            cs = i + 1;
            break;
        }
    }
    
    switch (cs)
    {
    case 1 :
        Form = new ShrubberyCreationForm( target );
        std::cout << "Intern creates" << Form->getName() << std::endl;
        break;
    case 2 :
        Form = new RobotomyRequestForm( target );
        std::cout << "Intern creates" << Form->getName() << std::endl;
        break;
    case 3 :
        Form = new PresidentialPardonForm( target );
        std::cout << "Intern creates" << Form->getName() << std::endl;
        break;
    default:
        Form = NULL;
        throw std::invalid_argument( "Form name doesn’t exist." );
        break;
    }
    
    return Form;
}

Intern::~Intern()
{
}