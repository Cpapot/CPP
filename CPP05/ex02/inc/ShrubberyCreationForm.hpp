/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:10:04 by cpapot            #+#    #+#             */
/*   Updated: 2023/12/13 16:41:52 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_HPP
# define SHRUBERRY_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
	std::string			_target;
public:
	ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	void		execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm const	&operator=(const ShrubberyCreationForm &src);
};

#endif
