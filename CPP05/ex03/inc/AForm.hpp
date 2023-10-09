/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:11:50 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/06 18:45:44 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	unsigned int		_signedGrade;
	unsigned int		_execGrade;
public:
	AForm(void);
	AForm(std::string name);
	AForm(std::string name, unsigned int signedGrade, unsigned int execGrade);
	virtual ~AForm();

	void				operator=(const AForm &);
	friend				std::ostream&	operator<<(std::ostream& os, const AForm &src);

	unsigned int		getSignedGrade(void);
	unsigned int		getExecGrade(void);
	bool				isSigned(void);
	const std::string	getName(void) const;
	void				setName(std::string);
	void				setSignedGrade(unsigned int);
	void				setExecGrade(unsigned int);

	bool				checkBureaucratExec(Bureaucrat const & executor) const;
	virtual void		execute(Bureaucrat const & executor) const = 0;
	void				beSigned(Bureaucrat &signatory);
};
