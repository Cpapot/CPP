/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:42:21 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/07 17:57:28 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string			_target;
public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	void		execute(Bureaucrat const & executor) const;
};
