/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:40:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/11 16:59:23 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <limits>
#include <iomanip>
#include "StockType.hpp"
#include "ScalarConverter.h"
#include <cstdlib>

typedef struct s_convert
{
	int		intValue;
	double	flvalue;
}	t_convert;

class ScalarConverter
{
public:
	static void		convert(std::string token);
	static int		find_type(std::string token);
	static char		convertChar(std::string token);
	static long		convertInt(std::string token);
	static double	convertDouble(std::string token);
	static double	convertFloat(std::string token);
	static void		printValue(StockType &data);
};

void	ScalarConverter::printValue(StockType &data)
{
	std::cout << data.getToken() << std::endl;
	if (data.getInt() >= 32 && data.getInt() <= 255)
		std::cout << "char: '" << data.getChar() << "'" << std::endl;
	else if (data.getInt() >= 0 && data.getInt() <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else if (!data.getToken().compare("<null>"))
		std::cout << "char: overflow" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (data.getLong() <= INT_MAX && data.getLong() >= INT_MIN)
		std::cout << "int: " << data.getInt() << std::endl;
	else if (!data.getToken().compare("<null>"))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(5) << data.getFloat() << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(5) << data.getDouble() << std::endl;
}

double	ScalarConverter::convertFloat(std::string token)
{
	double	fl;

	fl = strtod(token.c_str(), NULL);
	return (fl);
}

double		ScalarConverter::convertDouble(std::string token)
{
	double	fl;

	fl = strtod(token.c_str(), NULL);
	return (fl);
}

long		ScalarConverter::convertInt(std::string token)
{
	long	result;
	result = strtod(token.c_str(), NULL);
	return (result);
}

char		ScalarConverter::convertChar(std::string token)
{
	return token.c_str()[0];
}

void	ScalarConverter::convert(std::string token)
{
	int			type;

	type = find_type(token);
	StockType	data(type);

	if (token.compare("-inff") || token.compare("+inff") || token.compare("nanf") \
		|| token.compare("-inf") || token.compare("+inf") || token.compare("nan"))
		data.setToken(token);
	else
		data.setToken("<null>");
	switch (type)
	{
	case 0:
		throw std::invalid_argument("ScalarConverter::UnableToFindType");
		break;

	case CHAR:
		data = convertChar(token);
		break;

	case INT:
		data = convertInt(token);
		break;

	case FLOAT:
		data = convertFloat(token);
		break;

	case DOUBLE:
		data = convertDouble(token);

	default:
		break;
	}
	printValue(data);
}

int		ScalarConverter::find_type(std::string token)
{
	bool	containf = (token.find_first_of("f") == token.size() - 1);

	if (token.size() == 1 && token.find_first_not_of("0123456789") != token.npos)
		return (CHAR);
	if (token.at(0) == '-')
		token.erase(0, 1);
	if (token.find_first_not_of("0123456789") == token.npos && !containf)
		return (INT);
	else if ((token.find_first_not_of("0123456789.") == token.npos && !containf) || \
		(token.compare("-inf") || token.compare("+inf") || token.compare("nan")))
		return (DOUBLE);
	else if ((token.find_first_not_of("0123456789.f") == token.npos && containf) \
		|| (token.compare("-inff") || token.compare("+inff") || token.compare("nanf")))
		return (FLOAT);
	return (0);
}
