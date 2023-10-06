/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:52:58 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/06 15:18:55 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	Form::beSigned(Bureaucrat &signatory)
{
	if (signatory.getGrade() <= _signedGrade && !_signed)
	{
		std::cout << signatory.getName() << " signed " << _name << std::endl;
		_signed = true;
	}
	else
	{
		std::cout << signatory.getName() << " couldn’t sign " << _name << " because ";
		if (_signed)
			std::cout << "the form is already signed" << std::endl;
		else if (signatory.getGrade() > _signedGrade)
		{
			std::cout << "his grade is to low" << std::endl;
			throw std::invalid_argument("Form::GradeTooLowException");
		}
	}
}

std::ostream&	operator<<(std::ostream& os, const Form &src)
{
	if (!src._signed)
		os << "Form " << src._name << " is not signed and need a grade " << src._signedGrade << \
			" to be signed and a grade " << src._execGrade << " to be executed";
	else
		os << "Form " << src._name << " is signed and need a grade " << src._signedGrade << \
			" to be signed and a grade " << src._execGrade << " to be executed";
	return (os);
}

unsigned int		Form::getSignedGrade(void)
{
	return (_signedGrade);
}

unsigned int		Form::getExecGrade(void)
{
	return (_execGrade);
}

bool				Form::isSigned(void)
{
	return (_signed);
}

const std::string	Form::getName(void)
{
	return (_name);
}

Form::Form(std::string name, unsigned int signedGrade, unsigned int execGrade): _name(name)
{
	_signed = false;
	if (signedGrade <= 0)
		throw std::invalid_argument("Form::GradeTooHighException");
	else if (signedGrade >= 151)
		throw std::invalid_argument("Form::GradeTooLowException");
	else
	{
		_signedGrade = signedGrade;
	}
	if (execGrade <= 0)
		throw std::invalid_argument("Form::GradeTooHighException");
	else if (execGrade >= 151)
		throw std::invalid_argument("Form::GradeTooLowException");
	else
	{
		_execGrade = execGrade;
	}

}

Form::Form(std::string name): _name(name)
{
	_signedGrade = 150;
	_execGrade = 150;
}

Form::~Form()
{
}
