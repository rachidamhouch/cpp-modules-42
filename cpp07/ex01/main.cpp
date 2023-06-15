#include "iter.hpp"

int main()
{
    int T1[] = {1, 2, 3, 4, 5};
    iter(T1, 5, increment);
    iter(T1, 5, print);
    std::cout << "-------------" << std::endl;
    float T2[] =  {1.5, 2.5, 3.5, 4.5, 5.5};
    iter(T2, 5, increment);
    iter(T2, 5, print);
    return (0);
}