/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/13 15:41:04 by cpapot           ###   ########.fr       */
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
		swap(a, b);
		std::cout << "a: " << a << "	b: " << b << std::endl;
	}
	std::cout << "-----------------------------------------------" << std::endl;
	{
		int	a = 4; int b = 14;

		std::cout << "a: " << a << "	b: " << b << std::endl;
		swap(a, b);
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
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
}
