/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/13 11:00:31 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(const float nb)
{
	cout << "float constructor called" << endl;
	FixedNb = (nb * (1 << bitSize));
}

Fixed::Fixed(const int nb)
{
	cout << "int constructor called" << endl;
	FixedNb = (nb * (1 << bitSize));
}

Fixed::Fixed(void)
{
	cout << "Constructor called" << endl;
	FixedNb = 0;
}

inline bool		Fixed::operator<(const Fixed& r)
{
	return (this->toFloat() < r.toFloat());
}

ostream&	operator<<(ostream& os, const Fixed &src)
{
	cout << "<< operator called" << endl;

	os << src.toFloat();
	return (os);
}

void	Fixed::operator=(const Fixed &src)
{
	cout << "= operator called" << endl;
	FixedNb = src.FixedNb;
}

Fixed::Fixed (const Fixed &cpy)
{
	cout << "Copy called" << endl;
	FixedNb = cpy.FixedNb;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

void	Fixed::setRawBits(const int raw)
{
	FixedNb = raw;
}

int	Fixed::getRawBits(void)
{
	return (FixedNb);
}

int	Fixed::toInt(void) const
{
	cout << "to int called" << endl;
	return (FixedNb >> bitSize);
}

float	Fixed::toFloat(void) const
{
	cout << "to float called" << endl;
	return ((double)FixedNb / (double)(1 << bitSize));
}
