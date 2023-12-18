/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:27:44 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/18 15:42:48 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void	Intern::deleteForm(AForm *formArray[3], std::string formName)
{
	std::string	strArray[] =
	{	"robotomy request",
		"presidential pardon",
		"shrubbery creation"};

	for (int i = 0; i != 3;i++)
	{
		if (strArray[i] != formName)
			delete (formArray[i]);
	}
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	std::string array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*formArray[3];
	AForm	*result = NULL;

	formArray[0] = new RobotomyRequestForm(target);
	formArray[1] = new PresidentialPardonForm(target);
	formArray[2] = new ShrubberyCreationForm(target);
	for (int i = 0; i < 3; i++)
	{
		if (formName == array[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			result = formArray[i];
			break ;
		}
	}
	this->deleteForm(formArray, formName);
	if (result == NULL)
		throw std::invalid_argument("Intern::FormDoesNotExist");
	return (result);
}

Intern const	&Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Intern::Intern(const Bureaucrat &cpy)
{
	(void)cpy;
}

Intern::Intern()
{
}

Intern::~Intern()
{
}
