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
    catch(...)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    return (0);
}
