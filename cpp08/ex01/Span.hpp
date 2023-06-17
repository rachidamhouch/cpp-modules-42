#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
    private:
        unsigned int N;
        std::vector<int> Data;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const &copy);
        Span& operator=(Span const &copy);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};
#endif