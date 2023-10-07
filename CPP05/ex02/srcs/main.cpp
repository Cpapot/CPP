/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:30 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/07 19:14:32 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		Bureaucrat				intern("intern", 150);
		Bureaucrat				employee("employee", 70);
		Bureaucrat				boss("boss", 1);


		ShrubberyCreationForm	tree("sheesh");
		RobotomyRequestForm 	Robot("clap_trap");
		PresidentialPardonForm	president("intern");

		intern++;
		intern.executeForm(tree);
		employee.executeForm(tree);
		tree.beSigned(employee);
		employee.executeForm(tree);
		employee.executeForm(Robot);
		std::cout << employee << std::endl;
		for (int i = 0; i != 25; i++)
			employee++;
		std::cout << employee << std::endl;
		employee.executeForm(Robot);
		std::cout << boss << std::endl;
		boss.executeForm(president);
	}
}
