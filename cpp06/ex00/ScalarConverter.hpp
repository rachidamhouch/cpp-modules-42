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
    public:
        static void	convert(std::string const & literal);

};
#endif