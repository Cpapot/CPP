/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:32:49 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/06 23:47:06 by cpapot           ###   ########.fr       */
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
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat();

	const std::string			getName(void) const;
	const unsigned int			getGrade(void) const;

	friend std::ostream&		operator<<(std::ostream& os, const Bureaucrat &);
	Bureaucrat					operator++(void);
	Bureaucrat					operator++(int);
	Bureaucrat					operator--(void);
	Bureaucrat					operator--(int);
};
