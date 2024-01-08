
#pragma once

#include "Base.hpp"

class B : public Base
{
private:    
    std::string _type;
public:
    B( std::string type );
    std::string getType() const;
};