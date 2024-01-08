
#include "AForm.hpp"

AForm::AForm( std::string name , int sgrade , int xgrade ) : name(name) , sgrade( sgrade ) , xgrade( xgrade )
{
    if ( sgrade > 150 || xgrade > 150 )
        throw GradeTooLowException();
    else if ( sgrade < 1 || xgrade < 1 )
        throw GradeTooHighException();
    else
        isigned = false;
}

AForm::AForm( const AForm& other ) : name(other.getName()), sgrade(other.getsGrade()) , xgrade(other.getxGrade()) 
{
    *this = other;
}

AForm& AForm::operator= ( const AForm& other )
{
    if ( this != &other )
        this->isigned = other.isigned;
    return *this;
    
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char* AForm::NotSigned::what() const throw()
{
    return "Form not signed";
}

std::string AForm::getName() const 
{
    return name;
}

int AForm::getsGrade() const 
{
    return sgrade;
}

int AForm::getxGrade() const 
{
    return xgrade;
}

bool AForm::getIfSigned() const 
{
    return isigned;
}

void AForm::beSigned( const Bureaucrat& bureaucrat )
{
    if ( bureaucrat.getGrade() <= sgrade )
        isigned = true;
    else
        throw GradeTooLowException();
}

AForm::~AForm()
{
    
}

std::ostream& operator<< ( std::ostream& os , const AForm& other )
{
    os << other.getName() << " signed grade " << other.getsGrade() ;
    os << " execute grade " << other.getxGrade();
    os << " bool signed value " << other.getIfSigned();
    os << std::endl;
    return os;
}