
#include "Span.hpp"

int main() 
{ 
    Span sp = Span(5);

    std::vector<int> t;
    
    t.push_back(6);
    t.push_back(3);
    t.push_back(17);
    t.push_back(9);
    t.push_back(11);

    sp.addNumber(t);
    
    // sp.addNumber(6);
    sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0; 
}