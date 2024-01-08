
#pragma once

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat( std::string name, int grade);
    Bureaucrat( const Bureaucrat& other );
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    Bureaucrat& operator= ( const Bureaucrat& other );
    
    
    void incrementGrade();
    void decrementGrade();
    std::string GetName() const;
    int getGrade() const;
    void signForm( Form& form );
    
    ~Bureaucrat();
};

std::ostream& operator<< ( std::ostream& os , const Bureaucrat& other );