
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

int Bureaucrat::GateGrade() const 
{
    return grade;
}

std::ostream& operator<< ( std::ostream& os , const Bureaucrat& other )
{
    os << other.GetName() << ",";
    os << "bureaucrat garade " << other.GateGrade();
    return os;
}

Bureaucrat::~Bureaucrat()
{
}