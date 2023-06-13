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

int ScalarConverter::check(std::string const & literal)
{
    int i = 0;
    if ((literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
        || (literal.length() == 1 && !isdigit(literal[0])))
        return (0);
    if (literal[i] == '-' && literal[i] == '+')
        i++;
    while (literal[i])
    {
        if (!isdigit(literal[i]) && literal[i] != '.' && i != (int)literal.length() - 1)
            throw "char: impossible\n\
int: impossible\n\
float: impossible\n\
double: impossible";
        i++;
    }
    if (literal[i - 1] != 'f' && !isdigit(literal[i - 1]) && literal.length() > 1)
        throw "char: impossible\n\
int: impossible\n\
float: impossible\n\
double: impossible";
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
    return (1);
}

void ScalarConverter::convert(std::string const & literal)
{
    long double n;
    if (check(literal))
        n = std::stold(literal);
    else
    {
        if (literal.length() == 1)
            n = static_cast<int>(literal[0]);
        else
            n = static_cast<int>(literal[1]);
    }
    std::cout << "cahr: ";
    printChar(n);
    std::cout << "int: ";
    printInt(n);
    std::cout << "float: ";
    printFloat(n);
    std::cout << "double: ";
    printDouble(n);
}

void ScalarConverter::printInt(long double n)
{
    if (n > std::numeric_limits<int>::max() || n < std::numeric_limits<int>::min())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(n) << std::endl;
}

void ScalarConverter::printChar(long double n)
{
    if (n > std::numeric_limits<char>::max() || n < std::numeric_limits<char>::min() || !isprint(n))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<char>(n) << std::endl;
}

void ScalarConverter::printFloat(long double n)
{
    if (n > std::numeric_limits<float>::max() || n < std::numeric_limits<float>::min())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<float>(n) << "f" << std::endl;
}

void ScalarConverter::printDouble(long double n)
{
    if (n > std::numeric_limits<double>::max() || n < std::numeric_limits<double>::min())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<double>(n) << std::endl;
}