
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( "shrubbery creation" , 145 , 137 ) 
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ) : AForm( other )
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm& other )
{
    if( this != &other )
        _target = other._target;
    return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executer ) const
{
    if ( executer.getGrade() > this->getxGrade() )
        throw GradeTooLowException();
    else if (!getIfSigned())
        throw NotSigned();
    else
    {
        std::ofstream os;
        std::string tmp = getTarget() + "_shrubbery";
        os.open( tmp.c_str() );

        os << "                                      .         ;  " << std::endl;
        os << "         .              .              ;%     ;;   " << std::endl;
        os << "           ,           ,                :;%  %;   " << std::endl;
        os << "            :         ;                   :;%;'     .,   " << std::endl;
        os << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
        os << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        os << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        os << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        os << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        os << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        os << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
        os << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
        os << "                `@%.  `;@%.      ;@@%;         " << std::endl;
        os << "                  `@%%. `@%%    ;@@%;        " << std::endl;
        os << "                    ;@%. :@%%  %@@%;       " << std::endl;
        os << "                      %@bd%%%bd%%:;     " << std::endl;
        os << "                        #@%%%%%:;;" << std::endl;
        os << "                        %@@%%%::;" << std::endl;
        os << "                        %@@@%(o);  . '         " << std::endl;
        os << "                        %@@@o%;:(.,'         " << std::endl;
        os << "                    `.. %@@@o%::;         " << std::endl;
        os << "                       `)@@@o%::;         " << std::endl;
        os << "                        %@@(o)::;        " << std::endl;
        os << "                       .%@@@@%::;         " << std::endl;
        os << "                       ;%@@@@%::;.          " << std::endl;
        os << "                      ;%@@@@%%:;;;. " << std::endl;
        os << "                  ...;%@@@@@%%:;;;;,.." << std::endl;
        
        os.close();

    }
}

std::string ShrubberyCreationForm::getTarget() const 
{
    return _target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}