
#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;
public:
    ShrubberyCreationForm( std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm& other );
    ShrubberyCreationForm& operator= ( const ShrubberyCreationForm& other );
    
    void    execute( Bureaucrat const & executer ) const;
    std::string getTarget() const;
    
    ~ShrubberyCreationForm();
};