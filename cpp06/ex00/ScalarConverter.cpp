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

void ScalarConverter::check(std::string const & literal)
{
    if ((literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
        || (literal.length() == 1 && !isdigit(literal[0])))
        return;
    try
    {
        std::stoi(literal);
    }
    catch(const std::exception& e)
    {
        try
        {
            std::stof(literal);
        }
        catch(const std::exception& e)
        {
            try
            {
                std::stod(literal);
            }
            catch(const std::exception& e)
            {
                throw "char: impossible\n\
int: impossible\n\
float: impossible\n\
double: impossible";
            }
        }
    }
}

void ScalarConverter::convert(std::string const & literal)
{
    float n;
    check(literal);
    n = std::stof(literal);
    std::cout << n << std::endl;
}
