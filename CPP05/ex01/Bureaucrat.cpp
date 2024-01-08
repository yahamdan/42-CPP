
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name , int Grade ) : name(name) , grade(Grade)
{
    if ( Grade > 150)
    {
       throw GradeTooLowException();
    }
    else if ( Grade < 1)
         throw GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : name(other.name)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator= ( const Bureaucrat& other )
{
    if ( this != &other )
    {
        this->grade = other.grade;
    }
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void    Bureaucrat::incrementGrade()
{
    grade--;
    if ( grade < 1 )
        throw GradeTooHighException();
}

void    Bureaucrat::decrementGrade()
{
    grade++;
    if ( grade > 150 )
        throw GradeTooLowException();
        
}

std::string Bureaucrat::GetName() const 
{
    return name;
}

int Bureaucrat::getGrade() const 
{
    return grade;
}

void Bureaucrat::signForm( Form& form )
{
    if ( !form.getIfSigned() )
    {
        if (this->getGrade() <= form.getsGrade())
        {
            form.beSigned(*this);
            std::cout << name << " signed " << form.getName() << std::endl;
        }
        else{
        
        std::cerr << name << " couldn't sign " << form.getName();
        std::cerr << " because of a nonmatching grade." << std::endl;
        }
    }
    else
        std::cerr << "form already signed " << std::endl;
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream& operator<< ( std::ostream& os , const Bureaucrat& other )
{
    os << other.GetName() << " ,";
    os << " bureaucrat garade " << other.getGrade();
    os << std::endl;
    return os;
}