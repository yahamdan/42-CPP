
#pragma once

#include "AForm.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
public:
    RobotomyRequestForm( std::string target );   
    RobotomyRequestForm( const RobotomyRequestForm& other );
    RobotomyRequestForm& operator=( const RobotomyRequestForm& other );
    
    void execute( Bureaucrat const & executer ) const;
    std::string getTarget() const;
    
    ~RobotomyRequestForm();
};