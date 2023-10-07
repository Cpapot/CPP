/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:19:54 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/07 20:16:45 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
# include <map>

class Intern
{
private:
	AForm	*formAdrss;
public:
	Intern(void);
	AForm*	makeForm(std::string formName, std::string target);
	~Intern();

	AForm*	makeRobotomy(std::string target);
	AForm*	makePresidential(std::string target);
	AForm*	makeShrubbery(std::string target);
};

AForm*	Intern::makeShrubbery(std::string target)
{
	ShrubberyCreationForm result(target);
	formAdrss = &result;
	return (formAdrss);
}

AForm*	Intern::makePresidential(std::string target)
{
	PresidentialPardonForm result(target);
	formAdrss = &result;
	return (formAdrss);
}

AForm*	Intern::makeRobotomy(std::string target)
{
	RobotomyRequestForm result(target);
	formAdrss = &result;
	return (formAdrss);
}

typedef	AForm* (Intern::*fptr)(std::string target);

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	std::map<std::string, fptr>	formMap;

	formMap["robotomy request"] = &Intern::makeRobotomy;
	formMap["presidential pardon"] = &Intern::makePresidential;
	formMap["shrubbery creation"] = &Intern::makeShrubbery;
	if (formMap.find(formName) == formMap.end())
		throw std::invalid_argument("Intern::FormDoesNotExist");
	AForm *result = (this->*formMap[formName])(target);
	std::cout << "Intern creates " << formName << std::endl;
	return (result);
}

Intern::Intern()
{
}

Intern::~Intern()
{
}
