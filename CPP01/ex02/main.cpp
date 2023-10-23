#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "memory address of the string: " << &str << std::endl;
    std::cout << "memory address held by strPtr: " << stringPTR << std::endl;
    std::cout << "memory address held by strRef: " << &stringREF << std::endl;
    
    std::cout << "value of the string: " << str << std::endl;
    std::cout << "value pointed to by strPtr: " << *stringPTR << std::endl;
    std::cout << "value pointed to by strRef: " << stringREF << std::endl;
}