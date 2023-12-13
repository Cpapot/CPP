/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:52:58 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 15:57:31 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	Form::beSigned(Bureaucrat &signatory)
{
	if ((int)signatory.getGrade() <= _signedGrade && !_signed)
	{
		std::cout << signatory.getName() << " signed " << _name << std::endl;
		_signed = true;
	}
	else
	{
		std::cout << signatory.getName() << " couldn’t sign " << _name << " because ";
		if (_signed)
		{
			std::cout << "the Form is already signed" << std::endl;
			throw std::invalid_argument("Form::AlreadySigned");
		}
		else if ((int)signatory.getGrade() > _signedGrade)
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

Form const		&Form::operator=(const Form &src)
{
	this->~Form();
	new (this) Form(src);
	return (*this);
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

Form::Form(std::string name, unsigned int signedGrade, unsigned int execGrade): _name(name), _signedGrade(signedGrade), _execGrade(execGrade)
{
	_signed = false;
	if (signedGrade <= 0)
		throw std::invalid_argument("Form::GradeTooHighException");
	else if (signedGrade >= 151)
		throw std::invalid_argument("Form::GradeTooLowException");
	if (execGrade <= 0)
		throw std::invalid_argument("Form::GradeTooHighException");
	else if (execGrade >= 151)
		throw std::invalid_argument("Form::GradeTooLowException");
}

Form::Form(std::string name): _name(name), _signedGrade(150), _execGrade(150)
{
}

Form::Form(const Form &cpy): _name(cpy._name), _signedGrade(cpy._signedGrade), _execGrade(cpy._execGrade)
{
	if (_signedGrade <= 0)
		throw std::invalid_argument("Form::GradeTooHighException");
	else if (_signedGrade >= 151)
		throw std::invalid_argument("Form::GradeTooLowException");
	if (_execGrade <= 0)
		throw std::invalid_argument("Form::GradeTooHighException");
	else if (_execGrade >= 151)
		throw std::invalid_argument("Form::GradeTooLowException");
	_signed = cpy._signed;
}

Form::~Form()
{
}
