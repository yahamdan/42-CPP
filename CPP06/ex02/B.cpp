
#include "B.hpp"

B::B( std::string type ) : _type(type)
{
    std::cout << "B" << std::endl;
}

std::string B::getType() const
{
    return _type;
}