
#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int sgrade;
    bool isigned;
    const int xgrade;
    
public:
    Form( std::string name , int sgrade, int xgrade );
    Form( const Form& other );
    Form& operator= ( const Form& other );
    
    class   GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        const char* what () const throw();
    };
    
    
    std::string getName() const;
    int getsGrade() const;
    int getxGrade() const;
    bool getIfSigned() const;
    void beSigned( const Bureaucrat& bureaucrat );
    
    
    ~Form();
};

std::ostream& operator<< ( std::ostream& os , const Form& other );