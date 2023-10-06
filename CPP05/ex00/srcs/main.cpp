/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/06 14:04:07 by cpapot           ###   ########.fr       */
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
	}
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
}
