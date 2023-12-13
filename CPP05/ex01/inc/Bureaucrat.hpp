/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:49 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 15:45:30 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int 		_grade;
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat();

	std::string const	getName(void);
	unsigned int		getGrade(void);

	friend std::ostream&	operator<<(std::ostream& os, const Bureaucrat &);
	Bureaucrat				operator++(void);
	Bureaucrat				operator++(int);
	Bureaucrat				operator--(void);
	Bureaucrat				operator--(int);
	Bureaucrat const		&operator=(const Bureaucrat &src);
};

#endif
