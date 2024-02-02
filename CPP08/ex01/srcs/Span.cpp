/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:27:05 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/22 16:09:26 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size)
{
	_size = size;
	std::cout << "Span created with size of " << size << "." << std::endl;
}

Span::Span(const Span &cpy)
{
	_size = cpy._size;
	_intVector = cpy._intVector;
}

Span::~Span()
{
}

Span const		&Span::operator=(const Span &src)
{
	_size = src._size;
	_intVector = src._intVector;
	return *this;
}

void	Span::fillSpan(unsigned int size, int maxInt)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < size; i++)
	{
		this->addNumber(rand() % maxInt);
	}
}

void	Span::addNumber(int nb)
{
	if (_intVector.size() >= _size)
		throw (SpanFull());
	else
	{
		_intVector.push_back(nb);
		std::cout << nb << " has been added to span at " << _intVector.size() << std::endl;
	}
}

unsigned int	Span::longestSpan(void)
{
	if (_intVector.size() <= 1)
		throw (NotEnoughtElement());
	int max = -2147483647;
	int min	= 2147483647;
	for (int i = 0; i < (int)_intVector.size(); i++)
	{
		if (max < _intVector[i])
			max = _intVector[i];
		if (min > _intVector[i])
			min = _intVector[i];
	}
	return (max - min);
}

unsigned int	Span::shortestSpan(void)
{
	if (_intVector.size() <= 1)
		throw (NotEnoughtElement());
	unsigned int result = 2147483647;
	for (int i = 0; i < (int)_intVector.size(); i++)
	{
		for (int y = 0; y < (int)_intVector.size(); y++)
		{
			if (y != i && abs((_intVector[i] - _intVector[y])) < result)
				result = abs((_intVector[i] - _intVector[y]));
		}
	}
	return (result);
}
