/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 15:24:19 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	bool	exeption_caught = false;
	{
		Bureaucrat *test;
		try
		{
			test = new Bureaucrat("jean", 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			exeption_caught = true;
		}
		if (!exeption_caught)
			std::cout << *test << std::endl;
		delete test;
	}
	std::cout << "\n";
	exeption_caught = false;
	{
		Bureaucrat salut("comptable", 150);
		try
		{
			salut--;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			exeption_caught = true;
		}
		std::cout << salut << std::endl;
	}
	std::cout << "\n";
	{
		Bureaucrat test("nomtest", 50);
		std::cout << test << std::endl;
		Bureaucrat test2("oui", 75);
		std::cout << test2 << std::endl;
		test2 = test;
		std::cout << test2 << std::endl;
	}
}
