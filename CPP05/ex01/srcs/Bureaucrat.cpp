/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:08:48 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/06 14:29:36 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &src)
{
	os << src._name << ", bureaucrat grade " << src._grade;
	return (os);
}

Bureaucrat		Bureaucrat::operator--(int)
{
	Bureaucrat cpy(*this);
	operator--();
	return (cpy);
}

Bureaucrat		Bureaucrat::operator--()
{
	if (_grade == 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	else
		_grade++;
	return (*this);
}

Bureaucrat		Bureaucrat::operator++(int)
{
	Bureaucrat cpy(*this);
	operator++();
	return (cpy);
}

Bureaucrat		Bureaucrat::operator++()
{
	if (_grade == 1)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	else
		_grade--;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _name(cpy._name)
{
	_grade = cpy._grade;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	if (grade <= 0)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	else if (grade >= 151)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	else
	{
		_grade = grade;
	}
}

std::string const	Bureaucrat::getName(void)
{
	return (_name);
}

unsigned int		Bureaucrat::getGrade(void)
{
	return (_grade);
}

Bureaucrat::~Bureaucrat()
{
}
