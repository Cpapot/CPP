/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:12:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/26 15:36:20 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

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

template <typename T>
void	Array<T>::print()
{
	for (unsigned int i = 0; i != _size; i++)
		std::cout << i << ": " << _array[i] << std::endl;
	std::cout << std::endl;
}

