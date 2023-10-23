#include "Point.hpp"

int main()
{
    Point a(3 , 6);
    Point b(6 , 2);
    Point c(2 , 2);
    Point p(4 , 2.5);

   bool as = bsp(a, b, c, p);

    if (as)
        std::cout << "is in" << std::endl;
    else
        std::cout << "nooooooot" << std::endl;
}