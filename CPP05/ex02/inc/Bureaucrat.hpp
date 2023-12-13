/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:49 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 16:51:35 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class AForm;

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int 		_grade;
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat();

	const std::string			getName(void) const;
	unsigned int				getGrade(void) const;

	friend std::ostream&		operator<<(std::ostream& os, const Bureaucrat &);
	Bureaucrat					operator++(void);
	Bureaucrat					operator++(int);
	Bureaucrat					operator--(void);
	Bureaucrat					operator--(int);
	Bureaucrat const			&operator=(const Bureaucrat &src);

	void						executeForm(AForm const & form);
};

#endif
