/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 15:21:21 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(const float nb)
{
	std::cout << "float constructor called" << std::endl;
	FixedNb = (nb * (1 << bitSize));
}

Fixed::Fixed(const int nb)
{
	std::cout << "int constructor called" << std::endl;
	FixedNb = (nb * (1 << bitSize));
}

Fixed::Fixed(void)
{
	std::cout << "Constructor called" << std::endl;
	FixedNb = 0;
}

std::ostream&	operator<<(std::ostream& os, const Fixed &src)
{
	os << src.toFloat();
	return (os);
}

void	Fixed::operator=(const Fixed &src)
{
	std::cout << "= operator called" << std::endl;
	FixedNb = src.FixedNb;
}

Fixed::Fixed (const Fixed &cpy)
{
	std::cout << "Copy called" << std::endl;
	FixedNb = cpy.FixedNb;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
