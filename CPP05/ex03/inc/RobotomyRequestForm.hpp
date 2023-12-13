/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:15:28 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 16:52:27 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include<cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
	std::string			_target;
public:
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	void		execute(Bureaucrat const & executor) const;

	RobotomyRequestForm const	&operator=(const RobotomyRequestForm &src);
};

#endif
