/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:48:37 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 20:32:12 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"


#ifndef	POINTHPP
# define	POINTHPP
class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	// constructor
	Point(void);
	Point(float const x_pos, float const y_pos);
	Point(Fixed const x_pos, Fixed const y_pos);

	// cpy
	Point(const Point &cpy);

	//operator
	Point&		operator=(Point const &src);

	//destructor
	~Point();

	//getters
	Fixed	getx(void) const;
	Fixed	gety(void) const;

	//function
	void	printCoord(std::string id);
};

#endif
