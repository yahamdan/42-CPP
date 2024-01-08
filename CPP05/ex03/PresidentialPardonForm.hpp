
#pragma once

#include "AForm.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm( std::string target );   
    PresidentialPardonForm( const PresidentialPardonForm& other );
    PresidentialPardonForm& operator=( const PresidentialPardonForm& other );
    
    void execute( Bureaucrat const & executer ) const;
    std::string getTarget() const;
    
    ~PresidentialPardonForm();
};