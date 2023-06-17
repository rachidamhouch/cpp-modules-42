#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class NumberNotFound : public std::exception
{
    public:
        const char *what() const throw()
        {
            return "Number Not Found!";
        }
};

template <typename T>
void easyfind(T vec, int n)
{
    typename T::iterator it = std::find(vec.begin(), vec.end(), n);
    if (it != vec.end())
    {
        std::cout << "Index: " << it - vec.begin() << std::endl;
        return;
    }
    throw NumberNotFound();
}
#endif