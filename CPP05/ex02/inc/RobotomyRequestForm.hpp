/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:15:28 by cpapot            #+#    #+#             */
/*   Updated: 2023/10/07 17:57:34 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
	std::string			_target;
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	void		execute(Bureaucrat const & executor) const;
};
