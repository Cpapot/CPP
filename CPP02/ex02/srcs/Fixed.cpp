/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 15:47:14 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(const float nb)
{
	FixedNb = roundf(nb * (1 << bitSize));
}

Fixed::Fixed(const int nb)
{
	FixedNb = (nb * (1 << bitSize));
}

Fixed::Fixed(void)
{
	FixedNb = 0;
}

bool		Fixed::operator<(const Fixed& r) const
{
	return (this->toFloat() < r.toFloat());
}

bool		Fixed::operator<=(const Fixed& r) const
{
	return (this->toFloat() <= r.toFloat());
}

bool		Fixed::operator>(const Fixed& r) const
{
	return (this->toFloat() > r.toFloat());
}

bool		Fixed::operator>=(const Fixed& r) const
{
	return (this->toFloat() >= r.toFloat());
}

bool		Fixed::operator==(const Fixed& r) const
{
	return (this->toFloat() == r.toFloat());
}

bool		Fixed::operator!=(const Fixed& r) const
{
	return (this->toFloat() != r.toFloat());
}

std::ostream&	operator<<(std::ostream& os, const Fixed &src)
{
	os << src.toFloat();
	return (os);
}

void		Fixed::operator=(const Fixed &src)
{
	FixedNb = src.FixedNb;
}

Fixed		Fixed::operator+(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() + l.toFloat());
	return (tmp);
}

Fixed		Fixed::operator-(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() - l.toFloat());
	return (tmp);
}

Fixed		Fixed::operator*(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() * l.toFloat());
	return (tmp);
}

Fixed		Fixed::operator/(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() / l.toFloat());
	return (tmp);
}

Fixed		Fixed::operator--(void)
{
	setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed	cpy(*this);
	operator--();
	return (cpy);
}

Fixed		Fixed::operator++(void)
{
	setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed	cpy(*this);
	operator++();
	return (cpy);
}

Fixed::Fixed	(const Fixed &cpy)
{
	FixedNb = cpy.FixedNb;
}

Fixed::~Fixed()
{
}

void		Fixed::setRawBits(const int raw)
{
	FixedNb = raw;
}

int			Fixed::getRawBits(void)
{
	return (FixedNb);
}

int			Fixed::toInt(void) const
{
	return (FixedNb >> bitSize);
}

float		Fixed::toFloat(void) const
{
	return ((double)FixedNb / (double)(1 << bitSize));
}

Fixed	&Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb1);
	else
		return (nb2);
}

const Fixed		&Fixed::min(const Fixed &nb1,const Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb1);
	else
		return (nb2);
}

Fixed	&Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb1);
	else
		return (nb2);
}

const Fixed	&Fixed::max(const Fixed &nb1,const Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb1);
	else
		return (nb2);
}
