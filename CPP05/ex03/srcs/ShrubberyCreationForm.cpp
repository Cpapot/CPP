/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:55:47 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/07 19:02:26 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "ShrubberyCreationForm.h"

void		ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (!checkBureaucratExec(executor))
		return ;
	std::ofstream	out(_target.c_str());
	out << tree;
	out.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target + "_shrubbery";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
