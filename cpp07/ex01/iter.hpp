#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <class T>
void iter(T* array, unsigned const int s, void (*func)(T& a))
{
    unsigned int i = 0;
    while (i < s)
    {
        func(array[i]);
        i++;
    }
}

template <class T>
void print(T &a)
{
    std::cout << a << std::endl;
}

template <class T>
void increment(T &a)
{
    a++;
}
#endif
