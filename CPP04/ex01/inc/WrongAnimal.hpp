/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:44:18 by cpapot            #+#    #+#             */
/*   Updated: 2023/11/18 14:46:42 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALHPP
# define WRONGANIMALHPP

#include "Animal.h"

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &copy);

	WrongAnimal const	&operator=(WrongAnimal const &copy);

	virtual ~WrongAnimal();

	std::string	getType(void) const;

	void		printType(std::string str) const;
	void		makeSound(void) const;
};

#endif
