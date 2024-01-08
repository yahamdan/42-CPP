
#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class AForm;

class Intern
{
public:
    Intern( );
    Intern( const Intern& other );
    Intern& operator= ( const Intern& other );
    
    AForm * makeForm( std::string FormName , std::string target );
    
    ~Intern();
};
