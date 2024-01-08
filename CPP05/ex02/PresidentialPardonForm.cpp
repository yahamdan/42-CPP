
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm( "presidential pardon" , 25 , 5 )
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ) : AForm( other )
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator= ( const PresidentialPardonForm& other )
{
    if ( this != &other )
        this->_target = other._target;
    return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const & executer ) const
{
    if ( executer.getGrade() > this->getxGrade() )
        throw GradeTooLowException();
    else if (!getIfSigned())
        throw NotSigned();
    else{
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}

std::string PresidentialPardonForm::getTarget() const 
{
    return _target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}