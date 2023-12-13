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

#ifndef AFORM_HPP
# define AFORM_HPP
#include "Bureaucrat.hpp"

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signedGrade;
	const int			_execGrade;
public:
	AForm(void);
	AForm(const AForm &cpy);
	AForm(std::string name);
	AForm(std::string name, unsigned int signedGrade, unsigned int execGrade);
	~AForm();

	friend std::ostream&	operator<<(std::ostream& os, const AForm &src);
	AForm const				&operator=(const AForm &src);

	unsigned int		getSignedGrade(void);
	unsigned int		getExecGrade(void);
	bool				isSigned(void);
	const std::string	getName(void) const;

	bool				checkBureaucratExec(Bureaucrat const & executor) const;
	virtual void		execute(Bureaucrat const & executor) const = 0;
	void				beSigned(Bureaucrat &signatory);
};

#endif
