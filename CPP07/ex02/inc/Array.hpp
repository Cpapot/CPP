/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:12:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/18 15:25:36 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template <typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_size;
public:
	Array(const Array &);
	Array(unsigned int);
	Array(void);
	~Array(void);

	void	operator=(const Array &src);
	T&		operator[](int);

	unsigned int	size(void);
	void			print(void);
};

#endif
