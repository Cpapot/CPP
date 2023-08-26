/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecureString.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:39:13 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/26 17:47:41 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

static bool	isStringDigit(std::string str)
{
	int	i = 0;

	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (false);
		i++;
	}
	return (true);
}

std::string		getSecureNumber(std::string name)
{
	std::string		str;

	do
	{
		std::cout << name << " : ";
		std::getline(std::cin, str);
		if ((str.empty() || !isStringDigit(str)) && !std::cin.eof())
		{
			std::cin.clear();
			std::cout << "Enter a Valid Number" << std::endl;
		}
		else if (std::cin.eof())
			exit(0);
		else
			break;
	} while (1);
	return (str);
}

std::string	getSecureString(std::string name)
{
	std::string		result;

	do
	{
		std::cout << name << " : ";
		std::getline(std::cin, result);
		if (result.empty() && !std::cin.eof())
		{
			std::cin.clear();
			std::cout << name << " can't be empty" << std::endl;
		}
		else if (std::cin.eof())
			exit(0);
	} while (result.empty());
	return (result);
}
