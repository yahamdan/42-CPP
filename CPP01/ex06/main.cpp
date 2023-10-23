#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl _Harl;
        _Harl.complain(av[1]);
    }
    else
        std::cerr << "Invalid parameter!" << std::endl;
}