/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:11:50 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 16:00:05 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string		_name;
	bool					_signed;
	const int				_signedGrade;
	const int				_execGrade;
public:
	Form(const Form &cpy);
	Form(std::string name);
	Form(std::string name, unsigned int signedGrade, unsigned int execGrade);
	~Form();

	friend std::ostream&	operator<<(std::ostream& os, const Form &src);
	Form const				&operator=(const Form &src);

	unsigned int		getSignedGrade(void);
	unsigned int		getExecGrade(void);
	bool				isSigned(void);
	const std::string	getName(void);

	void	beSigned(Bureaucrat &signatory);
};

#endif
