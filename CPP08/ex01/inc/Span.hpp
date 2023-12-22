/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:15:00 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/22 16:09:35 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdlib.h>

class SpanFull: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Span::AlreadyFull";
	}
};

class NotEnoughtElement: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Span::NotEnoughtElement";
	}
};

class Span
{
private:
	std::vector<int>	_intVector;
	unsigned int		_size;
public:
	Span(unsigned int size);
	Span(const Span &cpy);
	~Span();

	void				addNumber(int nb);
	unsigned int		shortestSpan(void);
	unsigned int		longestSpan(void);
	void				fillSpan(unsigned int size, int maxInt);

	Span const		&operator=(const Span &src);
};

#endif
