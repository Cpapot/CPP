/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:10:04 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/07 00:15:24 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>
#include "trees.h"

class ShrubberyCreationForm: public AForm
{
public:
	ShrubberyCreationForm(void);
	~ShrubberyCreationForm();

	void		execute(Bureaucrat const & executor);
};

void		ShrubberyCreationForm::execute(const Bureaucrat & executor)
{
	if (!checkBureaucratExec(executor))
		return ;
	std::ofstream	out(_target + std::string("_shrubbery"));
	out << tree;
	out.close();
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
	this->setExecGrade(137);
	this->setSignedGrade(145);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

