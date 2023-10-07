/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:10:04 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/07 17:57:39 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
	std::string			_target;
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	void		execute(Bureaucrat const & executor) const;
};
