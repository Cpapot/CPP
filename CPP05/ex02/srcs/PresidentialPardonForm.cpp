/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:53:58 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 16:43:03 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!checkBureaucratExec(executor))
		return ;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm const	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	AForm::operator=(src);
	this->_target = src._target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): AForm(cpy)
{
	this->_target = cpy._target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
