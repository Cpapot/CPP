/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 15:39:06 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Bureaucrat	salut("intern", 150);
		Bureaucrat	compt("accountant", 15);
		Bureaucrat	promotion("promotion", 51);
		Form		contrat("bill of sale", 50, 20);

		std::cout << salut << std::endl;
		std::cout << compt << std::endl;
		std::cout << contrat << std::endl;
		try
		{
			contrat.beSigned(salut);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			contrat.beSigned(promotion);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		promotion++;
		try
		{
			contrat.beSigned(promotion);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			contrat.beSigned(compt);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
