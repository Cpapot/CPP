/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:52:58 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/06 15:18:55 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

bool		AForm::checkBureaucratExec(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _execGrade || _signed)
	{
		std::cout << executor.getName() << " couldn’t execute " << _name << " because ";
		if (_signed)
		{
			std::cout << "it has already been signed" << std::endl;
			throw std::invalid_argument("Form::CantExecuteSigned");
		}
		else
		{
			std::cout << "his grade is to low" << std::endl;
			throw std::invalid_argument("Form::GradeTooLowException");
		}
		return (false);
	}
	return (true);
}

void	AForm::beSigned(Bureaucrat &signatory)
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
		{
			std::cout << "the Form is already signed" << std::endl;
			throw std::invalid_argument("Form::AlreadySigned");
		}
		else if (signatory.getGrade() > _signedGrade)
		{
			std::cout << "his grade is to low" << std::endl;
			throw std::invalid_argument("Form::GradeTooLowException");
		}
	}
}

std::ostream&	operator<<(std::ostream& os, const AForm &src)
{
	if (!src._signed)
		os << "Form " << src._name << " is not signed and need a grade " << src._signedGrade << \
			" to be signed and a grade " << src._execGrade << " to be executed";
	else
		os << "Form " << src._name << " is signed and need a grade " << src._signedGrade << \
			" to be signed and a grade " << src._execGrade << " to be executed";
	return (os);
}

unsigned int		AForm::getSignedGrade(void)
{
	return (_signedGrade);
}

unsigned int		AForm::getExecGrade(void)
{
	return (_execGrade);
}

bool				AForm::isSigned(void)
{
	return (_signed);
}

const std::string	AForm::getName(void) const
{
	return (_name);
}

void				AForm::setSignedGrade(unsigned int signedGrade)
{
	_signedGrade = signedGrade;
}

void				AForm::setExecGrade(unsigned int execGrade)
{
	_execGrade = execGrade;
}

void	AForm::setName(std::string name)
{
	const std::string _name = name;
}

AForm::AForm(std::string name, unsigned int signedGrade, unsigned int execGrade): _name(name)
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

void		AForm::operator=(const AForm &cpy)
{
	const std::string _name = cpy._name;
	_signed = cpy._signed;
	_signedGrade = cpy._signedGrade;
	_execGrade = cpy._execGrade;
}

AForm::AForm()
{
	_signed = false;
}

AForm::AForm(std::string name): _name(name)
{
	_signedGrade = 150;
	_execGrade = 150;
}

AForm::~AForm()
{
}
