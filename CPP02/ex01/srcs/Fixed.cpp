/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/09 23:28:43 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int32_t	floatToBinary(void const * const ptr)
{
	return((int32_t)ptr);
}

Fixed::Fixed(const float nb)
{
	cout << "float constructor called" << endl;

	int32_t	binary = floatToBinary(&nb);
	int		integer = int(nb);
	int8_t	exponant = binary >> 23;

}

Fixed::Fixed(const int nb)
{
	cout << "int constructor called" << endl;
	FixedNb = nb << bitSize;
}

Fixed::Fixed(void)
{
	cout << "Constructor called" << endl;
	FixedNb = 0;
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
