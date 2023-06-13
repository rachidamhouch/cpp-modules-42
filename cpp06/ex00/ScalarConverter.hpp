#ifndef SC_HPP
# define SC_HPP
# include <iostream>
class ScalarConverter
{
    private:
        ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const & copy);
        static int check(std::string const & literal);
        static void prinInt(long double n);
        static void prinChar(long double n);
        static void prinFloat(long double n);
        static void prinDouble(long double n);
    public:
        static void	convert(std::string const & literal);

};
#endif