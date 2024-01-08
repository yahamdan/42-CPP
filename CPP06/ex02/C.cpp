
#include "C.hpp"

C::C( std::string type ) : _type(type)
{
        std::cout << "C" << std::endl;

}

std::string C::getType() const
{
    return _type;
}