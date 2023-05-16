#include "Point.hpp"

Point::Point(){}
Point::Point(const float x, const float y): x(x), y(y){}
Point::Point(const Point &p):x(p.x), y(p.y){}
Point& Point::operator=(const Point point)
{
    (void)point;
    return (*this);
}
Point::~Point(){}
const Fixed Point::get_x(void)
{
    return (this->x);
}

const Fixed Point::get_y(void)
{
    return (this->y);
}
