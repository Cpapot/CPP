/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:49 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/05 14:52:58 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int 		_grade;
public:
	Bureaucrat(std::string const &name, int grade);
	~Bureaucrat();

	std::string const	getName(void);
	unsigned int		getGrade(void);

	friend std::ostream&	operator<<(std::ostream& os, const Bureaucrat &);

};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &src)
{
	os << src._name << ", bureaucrat grade " << src._grade;
	return (os);
}


Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	if (grade <= 0)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	else if (grade >= 151)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	else
	{
		_grade = grade;
	}
}

Bureaucrat::~Bureaucrat()
{
}
