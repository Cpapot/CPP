/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/12 15:16:08 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
	{
		std::string a = "oui";
		std::string b = "non";

		std::cout << "a: " << a << "	b: " << b << std::endl;
		swap(&a, &b);
		std::cout << "a: " << a << "	b: " << b << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		int	a = 4; int b = 14;

		std::cout << "a: " << a << "	b: " << b << std::endl;
		swap(&a, &b);
		std::cout << "a: " << a << "	b: " << b << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		float a = 1.111111;
		float b = 1.112;

		std::cout << "a: " << a << "	b: " << b << std::endl;
		std::cout << "min :" << min(a, b) << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		char a = 'r';
		char b = 'y';

		std::cout << "a: " << a << "	b: " << b << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
	}
}
