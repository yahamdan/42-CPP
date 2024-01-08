
#include "Form.hpp"

Form::Form( std::string name , int sgrade , int xgrade ) : name(name) , sgrade( sgrade ) , xgrade( xgrade )
{
    if ( sgrade > 150 || xgrade > 150 )
        throw GradeTooLowException();
    else if ( sgrade < 1 || xgrade < 1 )
        throw GradeTooHighException();
    else
        isigned = false;
}

Form::Form( const Form& other ) : name(other.getName()), sgrade(other.getsGrade()) , xgrade(other.getxGrade()) 
{
    *this = other;
}

Form& Form::operator= ( const Form& other )
{
    if ( this != &other )
        this->isigned = other.isigned;
    return *this;
    
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::string Form::getName() const 
{
    return name;
}

int Form::getsGrade() const 
{
    return sgrade;
}

int Form::getxGrade() const 
{
    return xgrade;
}

bool Form::getIfSigned() const 
{
    return isigned;
}

void Form::beSigned( const Bureaucrat& bureaucrat )
{
    if ( bureaucrat.getGrade() <= sgrade )
        isigned = true;
    else
        throw GradeTooLowException();
}

Form::~Form()
{
    
}

std::ostream& operator<< ( std::ostream& os , const Form& other )
{
    os << other.getName() << "signed grade " << other.getsGrade() ;
    os << " execute grade " << other.getxGrade();
    os << " bool signed value " << other.getIfSigned();
    os << std::endl;
    return os;
}