
#pragma once

#include "Base.hpp"

class C : public Base
{
private:    
    std::string _type;
public:
    C( std::string type );
    std::string getType() const;
};