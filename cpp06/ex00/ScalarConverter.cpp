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

int ScalarConverter::getType(std::string const & literal)
{
    (void)literal;
    return(1);
}

void ScalarConverter::convert(std::string const & literal)
{
    std::string T[4] = {"char", "int", "float", "double"};
    std::cout << literal << " is: " << T[getType(literal)] << std::endl;
}
