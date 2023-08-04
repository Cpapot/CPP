/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecureString.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:01:42 by cpapot            #+#    #+#             */
/*   Updated: 2023/08/04 18:13:01 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SECURE_STRING_HPP

# define SECURE_STRING_HPP

#include "inc.h"

class SecureString
{
private:
	bool			isStringDigit(std::string str);
public:
	std::string		getSecureNumber(std::string name);
	std::string		getSecureString(std::string name);
};

bool	isStringDigit(std::string str)
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
		if (str.empty() || !isStringDigit(str))
		{
			std::cin.clear();
			std::cout << "Enter a Valid Number" << std::endl;
		}
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
		if (result.empty())
		{
			std::cin.clear();
			std::cout << name << " can't be empty" << std::endl;
		}
	} while (result.empty());
	return (result);
}
#endif
