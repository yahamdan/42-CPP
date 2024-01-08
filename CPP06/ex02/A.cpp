
#include "A.hpp"

A::A( std::string type ) : _type(type)
{
    std::cout << "A" << std::endl;
}

std::string A::getType() const
{
    return _type;
}