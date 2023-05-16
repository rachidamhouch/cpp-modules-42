#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point &p);
        Point &operator=(const Point point);
        ~Point(void);
        const Fixed get_x(void);
        const Fixed get_y(void);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
float triangleArea(Point a, Point b, Point c);
#endif