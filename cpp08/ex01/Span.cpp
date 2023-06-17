#include "Span.hpp"

Span::Span() : N(0) {}
Span::Span(unsigned int n) : N(n) {}
Span::Span(Span const &copy) : N(copy.N) {}
Span& Span::operator=(Span const &copy)
{
    if (this != &copy)
        N = copy.N;
    return (*this);
}

void Span::addNumber(int n)
{
    if (Data.size() + 1 > N)
        throw std::out_of_range("There are already N elements!");
    Data.push_back(n);
}

int Span::longestSpan()
{
    std::sort(Data.begin(), Data.end());
    return (Data.back() - Data.front());
}

int Span::shortestSpan()
{
    std::vector<int>::iterator	it = Data.begin();
    int min;

    std::sort(Data.begin(), Data.end());
    min = *(it + 1) - *it;
    for (;it != Data.end(); it++)
    {
        if (*(it + 1) - *it < min)
            min = *(it + 1) - *it;
    }
    return (min);
}
