/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:58:36 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 20:23:57 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	Point::gety(void) const
{
	return _y;
}

Fixed	Point::getx(void) const
{
	return _x;
}

void	Point::printCoord(std::string id)
{
	std::cout << "(" << id << ") x: " << _x << " y: " << _y << std::endl;
}

Point&	Point::operator=(const Point &src)
{
	if (this != &src)
	{
		(Fixed)this->_x = src.getx();
		(Fixed)this->_y = src.gety();
	}
	return (*this);
}

Point::Point (const Point &cpy) : _x(cpy._x), _y(cpy._y)
{
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(void) : _x(0), _y(0)
{
}

Point::~Point()
{
}
