/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:51 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/09 23:24:28 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define	FIXED_HPP

#include "Fixed.h"

class Fixed
{
private:
	int					FixedNb;
	static const int	bitSize = 8;
	int32_t	floatToBinary(void const * const ptr);

public:
	//cpy
	Fixed (const Fixed &cpy);

	//operator
	void operator=(const Fixed &);

	//construct & destruct
	Fixed(void);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	//getters & setters
	int		getRawBits(void);
	void	setRawBits(const int raw);
};

#endif
