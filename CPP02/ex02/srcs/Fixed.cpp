/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/26 19:00:47 by cpapot           ###   ########.fr       */
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

ostream&	operator<<(ostream& os, const Fixed &src)
{
	os << src.toFloat();
	return (os);
}

void	Fixed::operator=(const Fixed &src)
{
	FixedNb = src.FixedNb;
}

Fixed	Fixed::operator+(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() + l.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() - l.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() * l.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& l) const
{
	Fixed	tmp(this->toFloat() / l.toFloat());
	return (tmp);
}

Fixed	Fixed::operator++(void)
{
	Fixed tmp(this->toFloat() + 1);
	*this = tmp;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	cpy(*this);
	operator++();
	return (cpy);
}

Fixed::Fixed (const Fixed &cpy)
{
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
	return (FixedNb >> bitSize);
}

float	Fixed::toFloat(void) const
{
	return ((double)FixedNb / (double)(1 << bitSize));
}
