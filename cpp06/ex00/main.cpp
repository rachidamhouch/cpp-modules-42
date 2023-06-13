#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
       std::cout << "Error: Invalid number of arguments" << std::endl;
       return (1);
    }
    try
    {
        ScalarConverter::convert(av[1]);
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
    return (0);
}
