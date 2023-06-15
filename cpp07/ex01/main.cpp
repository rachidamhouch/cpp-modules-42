#include "iter.hpp"

int main()
{
    int T1[] = {1, 2, 3, 4, 5};
    iter(T1, 5, modify);
    iter(T1, 5, print);
    std::cout << "-------------" << std::endl;
    float T2[] =  {1.2, 2.2, 3.2, 4.2, 5.2};
    iter(T2, 5, modify);
    iter(T2, 5, print);
    return (0);
}