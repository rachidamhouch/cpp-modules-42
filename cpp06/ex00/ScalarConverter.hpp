#ifndef SC_HPP
# define SC_HPP
# include <iostream>
# include <limits>
# include <math.h>
# include <string>
class ScalarConverter
{
    private:
        ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const & copy);
        static int check(std::string const & literal);
        static void printInt(long double n);
        static void printChar(long double n);
        static void printFloat(long double n);
        static void printDouble(long double n);
        static void help(std::string const & literal);
    public:
        static void	convert(std::string const & literal);

};
#endif