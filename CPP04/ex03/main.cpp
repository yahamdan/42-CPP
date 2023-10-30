#include "Character.hpp"

int main()
{
    ICharacter *me = new Character("lilo");


    std::cout << &me << std::endl;
}