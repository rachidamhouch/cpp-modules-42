#ifndef EASYFIND_HPP
# define easyfind
# include <iostream>
# include <vector>
# include <exception>

class NumberNotFound : public std::exception
{
    public:
        const char *what() const throw()
        {
            return "Number Not Found";
        }
};

template <class T>
void easyfind(T vec, int n)
{
    T::iterator begin = vec.begin(), end = vec.end();
    int i = 0;

    for (begin, begin < end, ++begin)
    {
        if (*begin == n)
        {
            std::cout << "Index: " << i << std::endl;
            return;
        }
        i++;
    }
    throw NumberNotFound();
}
#endif