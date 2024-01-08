
#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool isigned;
    const int sgrade;
    const int xgrade;
    
public:
    AForm( std::string name , int sgrade, int xgrade );
    AForm( const AForm& other );
    AForm& operator= ( const AForm& other );
    
    class   GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
    
    class NotSigned : public std::exception
    {
        const char* what() const throw();
    };

    std::string getName() const;
    int getsGrade() const;
    int getxGrade() const;
    bool getIfSigned() const;
    void beSigned( const Bureaucrat& bureaucrat );
    virtual void execute( Bureaucrat const & executer ) const = 0;
    
    virtual ~AForm();
};

std::ostream& operator<< ( std::ostream& os , const AForm& other );