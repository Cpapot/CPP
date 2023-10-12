/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:44:25 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/12 12:44:59 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::printValue(StockType &data)
{
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

	if (isSpecialValue(token))
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

bool	ScalarConverter::isSpecialValue(std::string token)
{
	if (!token.compare("-inf") || !token.compare("+inf") || !token.compare("nan") ||\
		!token.compare("-inff") || !token.compare("+inff") || !token.compare("nanf"))
		return (true);
	return (false);
}

int		ScalarConverter::find_type(std::string token)
{
	bool	containf = (token.find_first_of("f") == token.size() - 1);

	if (token.find_first_not_of("0123456789.f") != token.npos && !isSpecialValue(token))
		return (0);
	if ((!token.compare("-inf") || !token.compare("+inf") || !token.compare("nan")))
		return (DOUBLE);
	else if ((!token.compare("-inff") || !token.compare("+inff") || !token.compare("nanf")))
		return (FLOAT);
	if (token.size() == 1 && token.find_first_not_of("0123456789") != token.npos)
		return (CHAR);
	if (token.at(0) == '-')
		token.erase(0, 1);
	if (token.find_first_not_of("0123456789") == token.npos && !containf)
		return (INT);
	else if ((token.find_first_not_of("0123456789.") == token.npos && !containf))
		return (DOUBLE);
	else if ((token.find_first_not_of("0123456789.f") == token.npos && containf))
		return (FLOAT);
	return (0);
}
