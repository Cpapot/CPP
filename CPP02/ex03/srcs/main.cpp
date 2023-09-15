/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:28 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 19:01:36 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void )
{
	Point	a(-2.02, -1.85);
	Point	b(1.06, 1.19);
	Point	c(-3, 3);
	Point	point(-2.16,0.69);

	a.printCoord("a");
	b.printCoord("b");
	c.printCoord("c");
	point.printCoord("point");

	if (bsp(a, b, c, point))
		std::cout << "point is inside ABC" << std::endl;
	else
		std::cout << "point is not inside ABC" << std::endl;
	return 0;
}
