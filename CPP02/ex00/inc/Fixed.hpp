/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:51 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/09 18:07:59 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define	FIXED_HPP

class Fixed
{
private:
	int			FixedNb;
	const int	bitSize = 8;

public:
	//cpy
	Fixed (const Fixed &cpy);

	//overloading
	void operator = (const Fixed &overload);

	//construct & destruct
	Fixed(void);
	~Fixed();
};

Fixed::Fixed (const Fixed &cpy)
{
	FixedNb = cpy.FixedNb;
}

Fixed::Fixed(void)
{
	FixedNb = 0;
}

Fixed::~Fixed()
{
}


#endif
