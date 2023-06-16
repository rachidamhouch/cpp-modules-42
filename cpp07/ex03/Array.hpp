#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template <class T>
class Array
{
    private:
        unsigned int n;
        T *array;
    public:
        Array();
        Array(const unsigned int n);
        Array(Array<T> const &copy);
        Array<T>& operator=(Array<T> const &copy);
        T& operator[](const unsigned int m) const;
        ~Array();
        unsigned int size() const;
};
template <class T>
Array<T>::Array()
{
    n = 0;
    array = new T[n];
}

template <class T>
Array<T>::Array(const unsigned int n)
{
    this->n = n;
    array = new T[n];
    for (unsigned int i = 0; i < n; i++)
        array[i] = i;
}

template <class T>
Array<T>& Array<T>::operator=(Array<T> const &copy)
{
    if (this != &copy)
    {
        n = copy.n;
        delete[] array;
        array = new T[copy.n];
        for (unsigned int i = 0; i < n; i++)
            array[i] = copy[i];
    }
    return (*this);
}

template <class T>
T& Array<T>::operator[](const unsigned int m) const
{
    if (m >= n || m < 0)
        throw std::out_of_range("index is out of bounds");
    return (array[m]);
}

template <class T>
Array<T>::Array(Array<T> const &copy)
{
    n = copy.n;
    array = new T[copy.n];
    for (unsigned int i = 0; i < n; i++)
        array[i] = copy[i];
}

template <class T>
unsigned int Array<T>::size() const
{
    return (n);
}

template <class T>
Array<T>::~Array()
{
    delete[] array;
}
#endif
