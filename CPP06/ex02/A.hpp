
#pragma once

#include "Base.hpp"

class A : public Base
{
private:    
    std::string _type;
public:
    A( std::string type );
    std::string getType() const;
};