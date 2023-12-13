/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:27:44 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 17:06:36 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void	Intern::deleteForm(std::map<std::string, AForm*> formMap, std::string formName)
{
	std::string	strArray[] =
	{	"robotomy request",
		"presidential pardon",
		"shrubbery creation"};

	for (int i = 0; i != 3;i++)
	{
		if (strArray[i] != formName)
			delete (formMap[strArray[i]]);
	}
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	std::map<std::string, AForm*>	formMap;

	formMap["robotomy request"] = new RobotomyRequestForm(target);
	formMap["presidential pardon"] = new PresidentialPardonForm(target);
	formMap["shrubbery creation"] = new ShrubberyCreationForm(target);
	if (formMap.find(formName) == formMap.end())
	{
		this->deleteForm(formMap, "<null>");
		throw std::invalid_argument("Intern::FormDoesNotExist");
	}
	AForm *result = (formMap[formName]);
	this->deleteForm(formMap, formName);
	std::cout << "Intern creates " << formName << std::endl;
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
