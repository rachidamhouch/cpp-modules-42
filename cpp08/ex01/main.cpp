#include "Span.hpp"

void test1()
{
    Span sp(5);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.addNumber(11);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test2()
{
    std::vector<int> T(10000);
    std::vector<int>::iterator begin = T.begin();
    Span sp(10000);
    for(int i = 1; begin < T.end(); ++begin, i++)
        *begin = i;
    try
    {
        sp.addNumbers(T.begin(), T.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.addNumber(11);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    test1();
    test2();
    return 0;
}
