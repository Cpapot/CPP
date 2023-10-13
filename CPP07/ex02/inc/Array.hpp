/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:12:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/13 16:53:38 by cpapot           ###   ########.fr       */
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
	unsigned int	size;
public:
	Array(const Array &);
	Array(unsigned int);
	Array(void);
	~Array();
};

template <typename T>
Array<T>::Array()
{
	_array = NULL;
	size = 0;
	std::cout << "NULL array created" << std::endl;
}
template <typename T>
Array<T>::Array(const Array &cpy)
{
	*this = cpy;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	T	*tab = new[] T();
	_array = tab;
}
