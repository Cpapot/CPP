/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:40:51 by cpapot            #+#    #+#             */
/*   Updated: 2023/09/15 15:46:40 by cpapot           ###   ########.fr       */
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

public:
	//cpy
	Fixed (const Fixed &cpy);

	//operator
	void			operator=(const Fixed &);
	Fixed			operator+(const Fixed &) const;
	Fixed			operator-(const Fixed &) const;
	Fixed			operator*(const Fixed &) const;
	Fixed			operator/(const Fixed &) const;

	Fixed			operator++(int);
	Fixed			operator++(void);
	Fixed			operator--(int);
	Fixed			operator--(void);

	bool			operator<(const Fixed& r) const;
	bool			operator>(const Fixed& r) const;
	bool			operator<=(const Fixed& r) const;
	bool			operator>=(const Fixed& r) const;
	bool			operator==(const Fixed& r) const;
	bool			operator!=(const Fixed& r) const;

	friend std::ostream&	operator<<(std::ostream& os, const Fixed &);

	//construct & destruct
	Fixed(void);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	//getters & setters
	int		getRawBits(void);
	void	setRawBits(const int raw);

	//function
	int					toInt(void) const;
	float				toFloat(void) const;
	static Fixed		&min(Fixed &nb1, Fixed &nb2);
	static const Fixed	&min(const Fixed &nb1, const Fixed &nb2);
	static Fixed		&max(Fixed &nb1, Fixed &nb2);
	static const Fixed	&max(const Fixed &nb1, const Fixed &nb2);
};

#endif
