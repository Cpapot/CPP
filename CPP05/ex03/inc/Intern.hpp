/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:19:54 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 17:05:57 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
# include <map>

class Intern
{
public:
	Intern(const Bureaucrat &cpy);
	Intern(void);
	AForm*	makeForm(std::string formName, std::string target);
	~Intern();

	Intern const	&operator=(const Intern &src);
	void	deleteForm(std::map<std::string, AForm*> formMap, std::string formName);
};

#endif
