#include "Point.hpp"

int main( void )
{
    Point a(0,0);
    Point b(20,0);
    Point c(10,30);
    Point point(10,15);
    if (bsp(a, b, c, point))
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;
    return (0);
}
