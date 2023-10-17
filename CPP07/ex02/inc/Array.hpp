/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:12:43 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/17 14:22:16 by cpapot           ###   ########.fr       */
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

template <typename T>
Array<T>::~Array()
{
	delete [] _array;
}
template <typename T>
T&		Array<T>::operator[](int index)
{
	if (index < 0 || (long)index >= (long)_size)
		throw std::invalid_argument("Array::InvalidIndex");
	return (_array[index]);
}

template <typename T>
unsigned int	Array<T>::size()
{
	return (_size);
}

template <typename T>
void	Array<T>::operator=(const Array &src)
{
	this->_size = src._size;
	if (_size == 0)
		_array = NULL;
	else
	{
		_array = new T[_size];
		for (unsigned int i = 0; i != _size; i++)
		{
			_array[i] = src._array[i];
		}
	}
}

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
	this->_size = cpy._size;
	if (_size == 0)
		_array = NULL;
	else
	{
		_array = new T[_size];
		for (unsigned int i = 0; i != _size; i++)
		{
			_array[i] = cpy._array[i];
		}
	}
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	T	*tab = new T[n];
	_size = n;
	_array = tab;
}
