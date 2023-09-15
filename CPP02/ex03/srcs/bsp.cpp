/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:49:36 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 18:59:10 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	triangleArea(Point a, Point b, Point c)
{
	Fixed	result;

	result = a.getx() * (b.gety() - c.gety()) + b.getx() * \
		(c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety());
	if (result < 0)
		result = result * -1;
	result = result * Fixed((float)0.5);
	return result;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc = triangleArea(a, b, c);
	Fixed abp = triangleArea(a, b, point);
	Fixed apc = triangleArea(a, c, point);
	Fixed bcp = triangleArea(b, c, point);

	return (abp + apc + bcp) == abc;
}
