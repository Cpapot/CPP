/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:52:58 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 16:52:55 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!checkBureaucratExec(executor))
		return ;
	std::cout << "*drilling noises*" << std::endl;
	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy failed on " << _target << std::endl;
}

RobotomyRequestForm const	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	AForm::operator=(src);
	this->_target = src._target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): AForm(cpy)
{
	this->_target = cpy._target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
	srand(time(0));
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
