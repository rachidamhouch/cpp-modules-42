#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
    (void)copy;
}
ScalarConverter::~ScalarConverter(){}
ScalarConverter& ScalarConverter::operator=(ScalarConverter const & copy)
{
    (void)copy;
    return (*this);
}

void ScalarConverter::convert(std::string const & literal)
{
    std::cout << literal << std::endl;
}
