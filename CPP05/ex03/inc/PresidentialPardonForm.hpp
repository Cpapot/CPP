/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:42:21 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 16:52:10 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string			_target;
public:
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	void		execute(Bureaucrat const & executor) const;

	PresidentialPardonForm const	&operator=(const PresidentialPardonForm &src);
};

#endif
