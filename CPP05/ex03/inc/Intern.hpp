/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:19:54 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/09 09:27:36 by cpapot           ###   ########.fr       */
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

	void	deleteForm(std::map<std::string, AForm*> formMap, std::string formName);
};
