
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm( "robotomy request" , 72 , 45 )
{
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ) : AForm( other )
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm& other )
{
    if ( this != &other )
        this->_target = other._target;
    return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const & executer ) const
{
    if ( executer.getGrade() > this->getxGrade() )
        throw GradeTooLowException();
    else if (!getIfSigned())
        throw NotSigned();
    else{
        
        srand(time(0));
        int random = rand();
        if ( random % 2 == 0 )
            std::cout << getTarget() << " has been robotomized successfully." << std::endl;
        else
            std::cout << "robotomy failed." << std::endl;
    }
}

std::string RobotomyRequestForm::getTarget() const 
{
    return _target; 
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}