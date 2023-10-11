/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:40:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/11 12:30:58 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <limits>
#include "ScalarConverter.h"

enum
{
	CHAR = 1,
	INT,
	FLOAT,
	DOUBLE
};

class ScalarConverter
{
public:
	static void		convert(std::string token);
	static int		find_type(std::string token);
	static char		convertChar(std::string token);
	static int		convertInt(std::string token);
	static float	convertFloat(std::string token);
};

float	convertFloat(std::string token)
{
	double	fl;

	std::istringstream(token) >> fl;
}

int		ScalarConverter::convertInt(std::string token)
{
	long	result;

	std::istringstream(token) >> result;
	if (result > INT_MAX)
		throw std::out_of_range("ScalarConverter::IntOutOfRange");
	else if (result < INT_MIN)
		throw std::out_of_range("ScalarConverter::IntOutOfRange");
	return ((int)result);
}

char		ScalarConverter::convertChar(std::string token)
{
	return token.c_str()[0];
}

void	ScalarConverter::convert(std::string token)
{
	int		type;

	type = find_type(token);
	switch (type)
	{
	case 0:
		throw std::invalid_argument("ScalarConverter::UnableToFindType");
		break;

	case CHAR:

		break;
	default:
		break;
	}
}

int		ScalarConverter::find_type(std::string token)
{
	bool	containf = (token.find_first_of("f") == token.npos - 1);

	if (token.size() == 1 && token.find_first_not_of("123456789") == token.npos)
		return (CHAR);
	if (token.at(0) == '-')
		token.erase(0, 1);
	else if (token.find_first_not_of("123456789") != token.npos && !containf)
		return (INT);
	else if (token.find_first_not_of("123456789.") != token.npos && !containf)
		return (DOUBLE);
	else if (token.find_first_not_of("123456789.f") != token.npos && containf)
		return (FLOAT);
	return (NULL);
}
