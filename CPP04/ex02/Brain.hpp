#pragma once

#include <iostream>

class   Brain
{
private :
    std::string ideas[100];
public :
    Brain();
    Brain( const Brain& other );
    Brain& operator= (const Brain& other );
    
    std::string *getIdeas();
    void    setIdeas( std::string *id );

    ~Brain();
};