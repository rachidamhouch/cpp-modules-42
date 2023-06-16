#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

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
        T& operator[](const unsigned int n) const;
        ~Array();
        class	OutOfRangeException: public std::exception
		{
			public:
				const char* what() const throw();
		};
        unsigned int size() const;
};

template <class T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
    return "Index is out of range";
}

template <class T>
Array<T>::Array()
{
    n = 0;
    array = new T[n];
}

template <class T>
Array<T>::Array(const unsigned int n)
{
    array = new T[n];
    for (unsigned int i = 0; i < n; i++)
        array[i] = i;
}

template <class T>
Array<T>& Array<T>::operator=(Array<T> const &copy)
{
    if (this != &copy)
    {
        array = new T[copy.n];
        for (unsigned int i = 0; i < n; i++)
            array[i] = copy[i];
    }
    return (*this);
}

template <class T>
T& Array<T>::operator[](const unsigned int n) const
{
    if (n >= this->n)
        throw Array<T>::OutOfRangeException();
    return (array[n]);
}

template <class T>
Array<T>::Array(Array<T> const &copy)
{
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
