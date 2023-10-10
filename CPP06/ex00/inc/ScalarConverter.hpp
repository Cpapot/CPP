/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:40:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/10 20:59:45 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

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
	static void		printChar(std::string token);
};

void		ScalarConverter::printChar(std::string token)
{
	std::cout << 
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
		printChar(token);
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
