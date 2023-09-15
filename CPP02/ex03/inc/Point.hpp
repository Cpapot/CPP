/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:48:37 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 17:58:24 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	// constructor
	Point(void);
	Point(float const x_pos, float const y_pos);

	// cpy
	Point(const Point &cpy);

	//operator
	void		operator=(Point const &);

	//destructor
	~Point();

	//getters
	Fixed	getx(void);
	Fixed	gety(void);

	//function
	void	printCoord(std::string id);
};
