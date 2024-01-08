
#include "Serializer.hpp"

int main()
{
    Data s;
    
    s.a = 5;
    s.b = "yaha";
    
    uintptr_t raw = Serializer::serialize( &s );
    
    Data * m = Serializer::deserialize( raw );
    
    std::cout << m->a << " " << m->b << std::endl;
}