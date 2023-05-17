/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:22:56 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/17 16:22:57 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
