/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 15:05:59 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

void	Fixed::setRawBits(const int raw)
{
	std::cout << "set raw bits called" << std::endl;
	FixedNb = raw;
}

int	Fixed::getRawBits(void)
{
	std::cout << "get raw bits called" << std::endl;
	return (FixedNb);
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

Fixed::Fixed(void)
{
	std::cout << "Constructor called" << std::endl;
	FixedNb = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

