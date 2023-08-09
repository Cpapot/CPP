/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/09 22:00:34 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

void	Fixed::setRawBits(const int raw)
{
	FixedNb = raw;
}

int	Fixed::getRawBits(void)
{
	return (FixedNb);
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

Fixed::Fixed(void)
{
	cout << "Constructor called" << endl;
	FixedNb = 0;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

